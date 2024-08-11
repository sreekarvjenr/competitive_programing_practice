#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i) ans += abs(arr[i] - arr[i - 1]);
    }
    int sum = ans;
    ans = max(ans, sum - abs(arr[0] - arr[1]) + abs(1 - arr[1]));
    ans = max(ans, sum - abs(arr[0] - arr[1]) + abs(k - arr[1]));
    for (int i = 1; i < n - 1; i++)
    {
        ans = max(ans, sum - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1])+ abs(1 - arr[i - 1]) + abs(1 - arr[i + 1]));
        ans = max(ans, sum - abs(arr[i] - arr[i - 1]) - abs(arr[i] - arr[i + 1])+ abs(k - arr[i - 1]) + abs(k - arr[i + 1]));
    }
    ans = max(ans, sum - abs(arr[n - 1] - arr[n - 2]) + abs(1 - arr[n - 2]));
    ans = max(ans, sum - abs(arr[n - 1] - arr[n - 2]) + abs(k - arr[n - 2]));
    cout<<ans<<endl;
    
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}