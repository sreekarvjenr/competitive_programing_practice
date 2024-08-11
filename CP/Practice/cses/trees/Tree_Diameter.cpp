#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> dis, par;

void dfs(int nd){
    for(auto c: g[nd]){
        if(c != par[nd]){
            dis[c] = dis[nd] + 1;
            par[c] = nd;
            dfs(c);
        }
    }
}

void solve()
{
    int n;
    cin>>n;
    if(n == 1){
        cout<<0;
        return;
    }
    g.resize(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    
    dis.assign(n + 1, -1);
    par.assign(n + 1, 0);

    dis[1] = 0;
    par[1] = -1;
    dfs(1);
    int max_dist_node = 1;
    for (int i = 1; i < n + 1; i++)
    {
        if(dis[i] > dis[max_dist_node]){
            max_dist_node = i;
        }
    }
    // cout<<max_dist_node;

    dis.assign(n + 1, 0);
    par.assign(n + 1, 0);
    dis[max_dist_node] = 0;
    par[max_dist_node] = -1;
    dfs(max_dist_node);
    // for(auto x: dis)cout<<x<<" ";
    cout<< *max_element(dis.begin(), dis.end());
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}