#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> dp;

int rec(int i){
    if(g[i].size() == 0) return dp[i] = 0;
    if(dp[i] != -1) return dp[i];
    dp[i] = 1;
    int temp =0;
    for(auto c: g[i]){
        temp = max(temp, rec(c));
    }
    return dp[i] = temp + 1;
}
void solve()
{
    int n, m;
    cin>>n>>m;
    g.resize(n + 1);
    dp.assign(n + 1, -1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin>>x>>y;
        g[x].push_back(y);
    }
    // g - directed fgraph.
    // longest path = ?
    // dp
    // dp[i] = max dis from node i.
    // dp[i] = 1 + max(dp[child])
    int te = 0;
    for (int i = 1; i < n + 1; i++)
    {
        te = max(te, rec(i));
    }
    cout<<te<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}