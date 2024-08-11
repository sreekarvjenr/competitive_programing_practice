#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        arr[i] /= abs(arr[i]);
    }
    vector<int> dp(n, 0);
    dp[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        if(arr[i] * arr[i + 1] >= 0) dp[i] = 1;
        else{
            dp[i] = dp[i + 1] + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    
    

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}