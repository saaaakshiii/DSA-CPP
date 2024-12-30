#include <bits/stdc++.h> 
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    //Efficient Approach 1
    // int fIndex[CHAR]={0};
    // fill(fIndex,fIndex+CHAR,-1);
    // int res=INT_MAX;
    // for(int i=0;i<str.length();i++){
    //     int fi=fIndex[str[i]];
    //     if(fi==-1)
    //     fIndex[str[i]]=i;
    //     else
    //     res=min(res,fi);
    // }
    
    // return (res==INT_MAX)?-1:res;

    //Efficient Approach-2

    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--){
        if(visited[str[i]])
        res=i;
        else
        visited[str[i]]=true;
        
    }
    
    return res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 