#include<bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a, b;
vector<vector<int>> dp;

int rec(int i, int ab){
    if(dp[i][ab] != -1){
        return dp[i][ab];
    }
    if(i == 0){
        dp[i][ab] = (ab?a[0]:(x+b[0]));
        return dp[i][ab];
    }
    dp[i][ab] = (ab?min(rec(i - 1, 1) + a[i], rec(i - 1, 0)+ a[i]):min(rec(i - 1, 1) + x + b[i], rec(i - 1, 0) + b[i]));
    return dp[i][ab];
}

void solve()
{
    cin>>n>>x;
    a.resize(n);
    b.resize(n);
    dp = vector<vector<int>> (n, vector<int>(2,-1));
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<min(rec(i, 0), rec(i, 1))<<" ";
    }
    cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<dp[i][0]<<" ";
    // }
    
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<dp[i][1]<<" ";
    // }
    
    // cout<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}