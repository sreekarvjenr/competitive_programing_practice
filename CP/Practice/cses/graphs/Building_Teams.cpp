#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<int> colr;
int flag = 1;
void dfs(int x){
    for(auto nd: g[x]){
        if(!colr[nd]){
            colr[nd] = 1^2^colr[x];
            dfs(nd);
        }
        if(colr[nd] == colr[x]){
            flag = 0;
            return;
        }

    }
}

void solve()
{
    int n, m;
    cin>>n>>m;
    g.resize(n + 1);
    colr.assign(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for (int i = 1; i < n + 1; i++)
    {
        if(!colr[i]){
            colr[i] = 1;
            dfs(i);
            if(flag == 0) break;
        }
    }
    if(!flag){
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<colr[i + 1]<<" ";
    }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}