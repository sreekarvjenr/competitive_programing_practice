#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> res;
    int p = 1;
    while(n > 0){
        int te = n % 10;
        if(te) res.push_back(te * p);
        p *= 10;
        n /= 10;
    }
    cout<<res.size()<<endl;
    for(auto e: res)cout<<e<<" ";
    cout<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}