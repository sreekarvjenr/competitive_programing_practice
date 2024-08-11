//Floyd Warshall's Algorithm

#include<bits/stdc++.h>
using namespace std;

#define int long long
int n, m, q;
vector<vector<int>> dis;

void flloyd(){
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        dis[a][b] = min(dis[a][b], c);
        dis[b][a] = min(dis[b][a], c);
    }
    for (int i = 1; i < n + 1; i++)
    {
        dis[i][i] = 0;
    }
    
    for (int k = 1; k < n + 1; k++)
    {
        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                dis[j][i] = dis[i][j];
            }
            
        }
        
    }
    
}

void solve()
{
    cin>>n>>m>>q;
    dis = vector<vector<int>> (n + 1, vector<int>(n + 1, 1e18));
    flloyd();
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin>>x>>y;
        if(dis[x][y] < 1e18) cout<<dis[x][y]<<endl;
        else cout<<-1<<endl;
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}