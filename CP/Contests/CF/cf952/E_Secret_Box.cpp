#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int x, y, z, k;
    cin>>x>>y>>z>>k;
    int cnt = 0;
    for (int a = 1; a <= x; a++)
    {
        if(k%a==0){
            for (int b = 1; b <= y; b++)
            {
                if(k % (a * b)==0){
                    int c = k / (a * b);
                    if(c <= z) cnt = max(cnt, (x - a + 1) * (y - b + 1) * (z - c + 1));
                }
            }
            
        }

    }
    cout<<cnt<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}