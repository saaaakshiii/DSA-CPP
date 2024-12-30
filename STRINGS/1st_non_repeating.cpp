#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int nonRep(string &str) 
{
    int fI[CHAR];
    fill(fI,fI+CHAR,-1);
    
    for(int i=0;i<str.length();i++){

        //If a character is encountered for the first time
        if(fI[str[i]]==-1)
        fI[str[i]]=i;
        //If a character is repeated
        else
        fI[str[i]]=-2;
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
        //Check for non-repeating characters and store the minimum index in result
        if(fI[i]>=0)res=min(res,fI[i]);
    }
    return (res==INT_MAX)?-1:res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep(str)<<endl;  
    
    return 0; 
} 