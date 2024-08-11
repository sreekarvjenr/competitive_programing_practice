#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> g;
vector<int> par,dis;

void printpath(int x){
    if(x == 0) return;
    printpath(par[x]);
    cout<<x<<" ";
}

void bfs(int x){
    queue<int> q;
    dis[x] = 0;
    q.push(x);
    while(!q.empty()){
        int nd = q.front();
        q.pop();
        for(auto i: g[nd]){
            if(dis[i] > dis[nd] + 1){
                dis[i] = dis[nd] + 1;
                par[i] = nd;
                q.push(i);
            }            
        }
    }
}

void solve()
{
    cin>>n>>m;
    g.resize(n + 1);
    par.assign(n + 1, 0);
    dis.assign(n + 1, 1e9);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bfs(1);
    // for(int i = 0; i<=n; i++) cout<<par[i]<<endl;
    if(dis[n] == 1e9){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    cout<<dis[n]+1<<endl;
    printpath(n);
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}