#include<bits/stdc++.h>
using namespace std;


void solve()
{
    vector<int> arr(3);
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr.begin(), arr.end());
    cout<<abs(arr[1] - arr[0]) + abs(arr[2] - arr[1]);
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}