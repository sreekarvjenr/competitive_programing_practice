#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<int> arr;
    arr.resize(n);
    for(int& v: arr) cin>>v;
    vector<vector<ll>> dp(n, vector<ll>(m + 1, 0));
    // dp[i][j] --> no. of paths from start to ith index when arr[i] = j.
    // dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1]
    if(arr[0] != 0){
        dp[0][arr[0]] = 1;
    }
    else{
        for (int i = 1; i < m + 1; i++)
        {
            dp[0][i] = 1;
        }
    }
    for(int i = 1; i < n; i++){
        if(arr[i] == 0){
            for (int j = 1; j < m + 1; j++)
            {
                (dp[i][j] += dp[i - 1][j]) %= mod;
                if(j - 1 > 0) (dp[i][j] += dp[i - 1][j - 1]) %= mod;
                if(j + 1 <= m) (dp[i][j] += dp[i - 1][j + 1]) %= mod;
            }
            
        }
        else{
            dp[i][arr[i]] = dp[i - 1][arr[i]];
            int j = arr[i];
            if(j - 1 > 0) (dp[i][j] += dp[i - 1][j - 1]) %= mod;
            if(j + 1 <= m) (dp[i][j] += dp[i - 1][j + 1]) %= mod;
        }
    }
    if(arr[n - 1]) {
        cout<< dp[n - 1][arr[n - 1]]<<endl;
    }
    else{
        ll ans = 0;
        for (int i = 1; i < m + 1; i++)
        {
            (ans += dp[n - 1][i]) %= mod;
        }
        cout<<ans<<endl;
        
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}
