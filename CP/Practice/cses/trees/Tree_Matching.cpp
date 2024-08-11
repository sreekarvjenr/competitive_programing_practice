#include<bits/stdc++.h>
using namespace std;

#define int long long

int n;
vector<vector<int>> tree, dp;

int rec(int node, int taken){
    if(dp[node][taken] != -1){
        return dp[node][taken];
    }

    dp[node][taken] = 0;
    if(!taken){
        
    }
}

void solve()
{
    cin>>n;
    tree.resize(n + 1);
    dp = vector<vector<int>> (n + 1, vector<int> (2, -1));
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin>>a>>b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    cout<<max(rec(1, 0), rec(1, 1))<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}