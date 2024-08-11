#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int a, b, p, q;
    cin>>a>>b;
    cin>>p>>q;
    bool c1 = (a < b) && (p>q);
    bool c2 = (a>b) && (p<q);
    bool c = c1 || c2;
    if(!c) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}