#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k;
    cin>>n>>k;
    while(k--){
        if(n % 10) n--;
        else n/= 10;
    }
    cout<<n;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}