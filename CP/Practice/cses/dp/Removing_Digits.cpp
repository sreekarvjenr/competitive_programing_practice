#include<bits/stdc++.h>
using namespace std;

int dp[1000010];

//yoyy solved it on the first attemt without any external help.

int rec(int n){
    if(dp[n] != -1){
        return dp[n];
    }
    if(n < 10){
        return dp[n] = 1;
    }
    int temp = n;
    dp[n] = 1e9;
    while(temp > 0){
        if(temp % 10){
            dp[n] = min(dp[n], 1 + rec(n - (temp%10)));
        }
        temp /= 10;
    }
    return dp[n];
}

void solve()
{
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<rec(n);
    // cout<<dp[2];
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}