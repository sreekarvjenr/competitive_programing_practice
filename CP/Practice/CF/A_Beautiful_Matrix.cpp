#include<bits/stdc++.h>
using namespace std;


void solve()
{
    for(int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++)
        {
            int x;
            cin>>x;
            // cout<<x<<' ';
            if(x == 1) {
                cout<< abs(3 - i) + abs(3 - j);
                // cout<<x<<' '<<i<<' '<<j;
                return;
            }
        }
        // cout<<endl;
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}