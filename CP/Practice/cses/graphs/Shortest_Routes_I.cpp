//Dijkstra's algorithm

#include<bits/stdc++.h>
using namespace std;

#define int long long
using ii = pair<int,int>;
using lli = long long;
#define F first
#define S second 
#define MP make_pair

int n, m;
vector<vector<ii>> g;
vector<int> dis;
vector<int> vis;

void dijkstra(int sc){
    dis.assign(n + 1, 1e18);
    vis.assign(n + 1, 0);
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    dis[sc] = 0;
    pq.push(MP(0, sc));

    while(!pq.empty()){
        ii nd = pq.top();
        pq.pop();
        if(vis[nd.S]) continue;
        vis[nd.S] = 1;
        for(auto v : g[nd.S]){
            int neigh = v.F;
            int wei = v.S;
            if(dis[neigh] > dis[nd.S] + wei ){
                dis[neigh] = dis[nd.S] + wei;
                pq.push(MP(dis[neigh], neigh));
            }

        }

    }
}

void solve()
{
    cin>>n>>m;
    g.resize(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        g[a].push_back({b, c});
    }
    dijkstra(1);
    for (int i = 1; i < n + 1; i++)
    {
        cout<<dis[i]<<" ";
    }
    // for (int i = 1; i < n + 1; i++)
    // {
    //     // cout<<vis[i]<<" ";
    //     for(auto v: g[i]){
    //         cout<<v.F<<" "<<v.S<<" ";
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}