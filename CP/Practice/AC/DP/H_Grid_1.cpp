#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;

void solve()
{
    int h, w;
    cin>>h>>w;
    vector<string> arr(h);
    for(string & x: arr) cin>>x;
    // for(string & x: arr) cout<< x << endl;
    vector<vector<int>> dp(h + 1, vector<int>(w + 1, 0));
    int i = 0;
    while(i < h && arr[i][0] != '#'){
        dp[i][0]++;
        i++;
    }
    i = 0;
    while(i < w && arr[0][i] != '#'){
        dp[0][i]++;
        i++;
    }
    for (int i = 1; i < h; i++)
    {
        for (int j = 1; j < w; j++)
        {
            if(arr[i][j] == '#') continue;
            dp[i][j] = (dp[ i - 1][j] + dp[i][j - 1]) % mod;
        }
        
    }
    cout<<dp[h - 1][w - 1];

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}