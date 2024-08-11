#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> vis;
vector<int> idk = {0};
int comp = 0;

void dfs(int x){
    vis[x] = comp;
    idk[comp] = x;
    for(auto node: g[x]){
        if(!vis[node]){
            vis[node] = comp;
            dfs(node);
        }        
    }
}

void solve()
{
    int n,m;
    cin>>n>>m;
    g.resize(n + 1);
    vis.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i < n + 1; i++)
    {
        if(!vis[i]){
            comp++;
            idk.push_back(0);
            dfs(i);
        }
    }
    // for (int i = 0; i < idk.size(); i++)
    // {
    //     cout<<idk[i];
    // }
    cout<<comp - 1<<endl; //no of required edges
    //edges:
    for (int i = 1; i < idk.size() - 1; i++)
    {
        cout<<idk[i]<<" "<<idk[i + 1]<<endl;
    }
    
    


    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}