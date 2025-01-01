#include <bits/stdc++.h> 
using namespace std; 
#define d 256 //The program assumes that the text and pattern consist of characters from the extended ASCII set.
// The extended ASCII set includes 256 characters (values ranging from 0 to 255).
// By setting d = 256, the algorithm can handle any character in this range.

const int q=101; //A prime number
void RBSearch(string pat,string txt,int M, int N){
    
    //Compute (d^(M-1))%q
    int h=1;
    for(int i=1;i<=M-1;i++)
        h=(h*d)%q;
    
    //Compute p and to
    int p=0,t=0;
    for(int i=0;i<M;i++){
        p=(p*d+pat[i])%q;
        t=(t*d+txt[i])%q;
    }
    
    for(int i=0;i<=(N-M);i++){
       //Check for hit
       if(p==t){
           bool flag=true;
           for(int j=0;j<M;j++)
                if(txt[i+j]!=pat[j]){flag=false;break;}
            if(flag==true)cout<<i<<" ";
       }
       //Compute ti+1 using ti
       if(i<N-M){
           t=((d*(t-txt[i]*h))+txt[i+M])%q;
        if(t<0)t=t+q;
       }
    }
    
}
 
int main() 
{ 
    string txt = "GEEKS FOR GEEKS";string pat="GEEK";
    cout<<"All index numbers where pattern found:"<<" ";
    RBSearch(pat,txt,4,15);
    
    return 0; 
} 