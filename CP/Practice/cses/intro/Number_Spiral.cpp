#include<bits/stdc++.h>
using namespace std;

#define int long long


void solve()
{
    int y, x;
    cin>>y>>x;
    int maxi = max(x, y);
    int sq = (maxi - 1) * (maxi - 1);
    if(sq%2){
        if(x>y){
            cout<<sq + y<<endl;
        }
        else{
            cout<<maxi * maxi - x + 1<<endl;
        }
    }
    else{
        if(x > y){
            cout<<maxi * maxi + 1 - y<<endl; 
        }
        else{
            cout<<sq + x << endl;
        }
    }


}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}