#include<bits/stdc++.h>
using namespace std;


void solve()
{
    long long x;
    cin>>x;
    int res = 0;
    while(x > 0){
        int t = x % 10;
        if(t == 4 || t == 7) res++;
        if(res > 7){
            cout<<"NO";
            return;
        }
        x /= 10;
    }
    if(res == 4 || res == 7) cout<<"YES";
    else cout<< "NO";
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}