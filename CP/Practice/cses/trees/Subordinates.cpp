#include<bits/stdc++.h>
using namespace std;

#define int long long

vector<vector<int>> tree;
vector<int> sub;

int rec(int nd){
    if(sub[nd]!=-1){
        return sub[nd];
    }

    if(!tree[nd].size()){
        return sub[nd] = 0;
    }
    
    int res = tree[nd].size();
    for(auto v: tree[nd]){
        res += rec(v);
    }
    
    sub[nd] = res;
    return res;  
}

void solve()
{
    int n;
    cin>>n;
    tree.resize(n + 1);
    sub.assign(n + 1, -1);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin>>x;
        tree[x].push_back(i);
    }
    // for (int i = 0; i < n + 1; i++)
    // {
    //     for (int j = 0; j < tree[i].size(); j++)
    //     {
    //         cout<<tree[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    for (int i = 1; i < n + 1; i++)
    {
        cout<<rec(i)<<" ";
    }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}