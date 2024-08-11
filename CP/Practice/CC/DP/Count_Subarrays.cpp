#include<bits/stdc++.h>
using namespace std;
#define int long long


void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int ans = n;
    int cnt = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if(arr[i+1] >= arr[i]){
            cnt++;
        }
        else{
            ans += (cnt * (cnt - 1)) / 2;
            cnt = 1;
        }
    }
    ans += (cnt * (cnt - 1)) / 2;
    cout<<ans<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}