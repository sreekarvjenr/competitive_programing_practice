#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int res = 0, cnt = 0;
    while(n--){
        int a, b;
        cin>>a>>b;
        cnt += (b - a);
        res = max(res, cnt);
    }
    cout<<res;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}