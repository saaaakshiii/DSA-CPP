#include<iostream> 

using namespace std;

int numberOfZeroes(int n)
{
    int res=0;
    for (int i = 5; i <= n; i=i*5)
    {
        res=res+(n/i);
    }
    return res;
}
          
int main()
{
    int n=5;
    int ans=numberOfZeroes(n);
    cout<<ans;
    return 0;
}