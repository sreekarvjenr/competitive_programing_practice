#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int &v: arr) cin>>v;
    int ma = 0, mi = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > arr[ma]) ma = i;
        if(arr[i] <= arr[mi]) mi = i;
    }
    if(ma<mi) cout<< abs(ma) + abs(n - 1 - mi);
    else cout<< abs(ma) + abs(n - 1 - mi) - 1;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}