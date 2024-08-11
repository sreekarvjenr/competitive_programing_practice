#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int l, b;
    cin>>l>>b;
    int n = 1;
    while(l * pow(3, n) <= b * pow(2, n)){
        n++;
    }
    cout<<n;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}