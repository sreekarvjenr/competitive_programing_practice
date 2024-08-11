#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int a1, a2, b1, b2;
    cin>>a1>>a2>>b1>>b2;
    int res = 0;
    res = (a1 > b1) + (a1 > b2) + (a2 > b1) + (a2 > b2);
    res = res - res%2;
    cout<<res<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}