#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int te = min(k*l / nl, c * d);
    te = min(te, p / np);
    cout<< (te / n);
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}