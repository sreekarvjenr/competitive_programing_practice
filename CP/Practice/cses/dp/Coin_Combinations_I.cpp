#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n, x;
    cin>>n>>x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
    {
        cin>>coins[i];
    }
    // dp[x] = sum(dp[x - coins[i]]) for all i's
    // O(n.x) --> 10^8
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i - coins[j] >= 0){
                (dp[i] += dp[i - coins[j]]) %= (int)(1e9+7);
            }
        }
        
    }
    cout<<dp[x]<<'\n';

    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}