#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s, t;
    cin>>s>>t;
    bool c = s=="AtCoder" && t=="Land";
    cout<<(c?"Yes":"No")<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}