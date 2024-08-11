#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin>>n;
    int res = 1;
    for (int i = 0; i < n  ; i++)
    {
        res = (res * 2) % 1000000007;
    }
    cout<<res<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}