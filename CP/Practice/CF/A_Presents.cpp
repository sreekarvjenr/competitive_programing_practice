#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n), res(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        res[arr[i]- 1] = i + 1;
    }
    
    for(int x: res) cout<<x<<" ";
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}