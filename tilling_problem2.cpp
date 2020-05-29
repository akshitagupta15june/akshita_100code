#include <bits/stdc++.h>
#define C 1000000007
using namespace std;

long long func(int N,int M)
{
    long long dp[N+1];
    dp[0]=dp[1]=1;
    for(int i=2;i<=N;i++)
        if(i>=M)
            dp[i]=(dp[i-1]+dp[i-M])%C;
        else
            dp[i]=dp[i-1];
    return dp[N];
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        cout<<func(N,M)<<endl;
    }
}
