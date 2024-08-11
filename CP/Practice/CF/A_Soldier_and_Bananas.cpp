#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k, w;
    cin>>k>>n>>w;
    int t = -(n - k * ((w * (w + 1)) / 2));
    if(t > 0) cout<<t;

    else cout<< 0;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}