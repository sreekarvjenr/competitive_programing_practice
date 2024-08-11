#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int> dp(n + 1);
    int sum = 0;
    for (int i = 1; i < 7; i++)
    {
        dp[i] = 1 + sum;
        sum += dp[i];
    }
    for (int i = 7; i < n + 1; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            dp[i]= (dp[i] + dp[i-j-1]) % 1000000007;
        }
    }
    cout<<dp[n]<<'\n';
    
    
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}