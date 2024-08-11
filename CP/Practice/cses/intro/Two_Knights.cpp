#include<bits/stdc++.h>
using namespace std;
#define int long long

int res(int n){
    return ((n*n * (n*n - 1)) / 2) - (4 * ( n - 1) * (n - 2));
}

void solve()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<res(i)<<endl;
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}