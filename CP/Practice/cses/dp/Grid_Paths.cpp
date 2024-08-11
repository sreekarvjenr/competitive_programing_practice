#include<bits/stdc++.h>
using namespace std;


int n;
int mod = 1000000007;
vector<string> arr;
vector<vector<int>> dp;

int check(int i, int j){
    return i < n && j< n && i>=0 && j>=0 && arr[i][j]=='.';
}

int rec(int i, int j){
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    if(i == n - 1 && j == n - 1){
        return dp[i][j] = (check(i,j) ? 1 : 0);
    }
    dp[i][j] = 0;
    if(check(i,j)){
        if(check(i + 1, j)) (dp[i][j] += rec(i + 1, j)) %= mod;
        if(check(i, j + 1)) (dp[i][j] += rec(i, j + 1)) %= mod;
    }
    return dp[i][j];
   
}


void solve()
{
    cin>>n;
    arr.resize(n);
    dp = vector<vector<int>> (n, vector<int>(n, -1));
    for(string& v: arr) cin>>v;
    // if(check(0,0)) 
    cout<<rec(0,0)<<'\n';
    // else cout<<0<<'\n';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<'\n';
        
    // }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}