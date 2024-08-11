#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> dp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    dp[0] = 0;
    dp[1] = abs(arr[1] - arr[0]);
    for (int i = 2; i < n; i++)
    {
        int mi = 1e9;
        for (int j = max(0 * 1LL, i - k); j < i; j++)
        {
            mi = min(mi, dp[j] + abs(arr[j] - arr[i]));
        }
        dp[i] = mi;
        
    }
    cout<<dp[n-1]<<endl;
    
}
 signed main(){
    solve();
 }