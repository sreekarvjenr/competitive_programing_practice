#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> g;
vector<int> par, vis, path;
int st, en;
int check = 0;

void dfs(int nd){
    vis[nd] = 1;
    int p = par[nd];
   for(auto v: g[nd]){
        if(p==v) continue;
        if(vis[v]){
            en = nd;
            st = v;
            check = 1;
            return;
        }
        if(!vis[v]) {
            par[v] = nd;
            dfs(v);
        }
    }
}

void printcycle(){
    // cout<<st<<en<<endl;
    vector<int> res;
    int te = st;
    while(st != en){
        res.push_back(st);
        st = par[st];
    }
    res.push_back(en);
    // reverse(res.begin(), res.end());
    res.push_back(te);
    cout<<res.size()<<endl;
    for(auto v: res){
        cout<<v<<" ";
    }
    cout<<endl;
}

void solve()
{
    cin>>n>>m;
    g.resize(n+1);
    par.assign(n + 1, -1);
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
            par[i] = -1;
            dfs(i);
            if(check){
                printcycle();
                break;
            }
        }
    }
    if(!check) cout<<"IMPOSSIBLE"<<endl;
    // for (int i = 1; i < n + 1; i++)
    // {
    //     cout<<par[i]<<" ";
    // }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int p;cin>>p;while(p--)
       solve();
}