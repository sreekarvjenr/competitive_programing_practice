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
    // dp[x] = min(dp[x - coins[0]] + 1, dp[x - coins[1]] + 1, .....)
    // comp = O(n.x) ==> 10^8 --> gud enugh..
    vector<int> dp(x + 1);
    for (int i = 1; i < x + 1; i++)
    {
        dp[i] = 1e18;
        for (int j = 0; j < n; j++)
        {
            if(i - coins[j] >= 0){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
        
    }
    if(dp[x] < 1e18) cout<<dp[x]<<'\n';
    else cout<<-1<<'\n';

    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}