#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int x = 2,k,sum = 0;
    for (int i = 2; i < n + 1; i++)
    {
        k = n / i;
        int temp = i * ((k*(k+1))/2);
        if(sum < temp){
            sum = temp;
            x = i;
        }
    }
    
    cout<<x<<endl;

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}