#include<bits/stdc++.h>
using namespace std;

#define int long long

int n, w;
int we[110];
int va[110];
int maxVal = 1e5;
int dp[110][100100];

int rec(int i, int v){
    if(dp[i][v]!=-1){
        return dp[i][v];
    }

    if(v==0){
        return 0;
    }

    if(i==0){
        return 1e13;
    }

    int ans = rec(i - 1, v);
    if(va[i]<= v){
        ans = min(ans, we[i] + rec(i - 1, v - va[i]));
    }

    return dp[i][v] = ans;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    cin>>n>>w;
    for (int i = 1; i <= n; i++)
    {
        cin>>we[i]>>va[i];
    }
    int ans = 0;
    for (int i = maxVal; i >= 0; i--)
    {
        if(rec(n, i) <= w){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}