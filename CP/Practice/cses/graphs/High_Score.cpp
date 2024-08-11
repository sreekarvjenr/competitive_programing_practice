// Bellman-Ford Algorithm

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define inf LLONG_MAX

int n,m;
vector<tuple<int,int,int>> g;
vector<vector<int>> gdfs;
vector<int> dis, vis;
int cycle_check = 0;

void dfs(int x){
    vis[x] = 1;
    for(auto v: gdfs[x]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int reachable(int nd){
    vis.assign(n + 1, 0);
    dfs(nd);
    return vis[n];
}

void bford(int sc){
    dis.assign(n + 1, inf);
    dis[sc] = 0;
    for (int k = 0; k < n - 1; k++)
    {
        for(auto ed: g){
            int src = get<0>(ed);
            int des = get<1>(ed);
            int wei = get<2>(ed);
            if(dis[src] != inf && (dis[des]>(dis[src]+wei))){
                dis[des] = (dis[src]+wei);
            }
        }
    }
    for(auto ed: g){
            int src = get<0>(ed);
            int des = get<1>(ed);
            int wei = get<2>(ed);
            if(dis[src] != inf && (dis[des]>(dis[src]+wei))){
                dis[des] = (dis[src]+wei);
                if(reachable(des)){
                    cycle_check = 1;
                    return;
                }
            }
        }
    
}

void solve()
{
    cin>>n>>m;
    gdfs.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        g.push_back(make_tuple(a,b,-c));
        gdfs[a].push_back(b);
    }
    bford(1);
    // for(auto d: dis){
    //     cout<<-d<<" ";
    // }
    if(cycle_check){
        cout<<-1;
        return;
    }
    cout<<-dis[n];
    // for(auto e: g){
    //     cout<<get<0>(e)<<" "<<get<1>(e)<<" "<<get<2>(e)<<endl;
    // }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}