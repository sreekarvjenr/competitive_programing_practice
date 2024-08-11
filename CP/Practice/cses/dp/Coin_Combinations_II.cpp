#include<bits/stdc++.h>
using namespace std;

// #define int long long
// do not use long long int every time!!


void solve()
{
    int n, x;
    int mod = 1e9+7;
    cin>>n>>x;
    vector<int> coins(n);
    for(int& v: coins) cin>>v;
    // dp[i][j] = no. of ways of producing sum j with first i coins.
    // i = 1 to n
    // dp[i][j]  --> two parts
    // dont take the ith coin --> dp[i - 1][j]
    // take the ith coin --> dp[i][j - coins[i - 1]]
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < x + 1; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if(j - coins[i - 1] >= 0){ // >=0 because there is 1 way of making sum 0 with any number of coins.
                (dp[i][j] += dp[i][j - coins[i - 1]]) %= (mod);
            }
        }
        
    }
    cout<<dp[n][x]<<'\n';
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}