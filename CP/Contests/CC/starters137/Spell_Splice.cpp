#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int a[n], v[n];
    for (int i = 0; i < n; i++)
    {
        cin>>v[i]>>a[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans = max(ans, a[i]*v[j] + a[j]*v[i]);
        }
        
    }
    
    cout<<ans<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}