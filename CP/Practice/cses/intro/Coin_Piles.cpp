#include<bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int a, b;
    cin>>a>>b;
    if((a+b)%3!=0) cout<<"NO"<<endl;
    else{
        int t = 2 * a - b;
        int r = 2 * b - a;
        bool c = ((t%3==0) && (t>=0)) && ((r%3==0) && (r>=0));
        cout<<(c?"YES":"NO")<<endl;
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}