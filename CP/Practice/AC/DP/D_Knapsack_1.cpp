#include<bits/stdc++.h>
using namespace std;

#define int long long

int n, w;
int we[110];
int va[110];
int dp[110][100100];

int rec(int i, int a){
    if(dp[i][a] != -1){
        return dp[i][a];
    }
    if(i==0 || a==0) {
        return dp[i][a] = 0;
    }
    int ans = rec(i - 1, a);
    if(we[i]<=a){
        ans = max(ans, rec(i - 1, a - we[i]) + va[i]);
    }
    return dp[i][a] = ans;
}

void solve(){
    cin>>n>>w;
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= n; i++)
    {
        cin>>we[i]>>va[i];
    }

    cout<<rec(n, w)<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}