#include "bits/stdc++.h"
using namespace std;

int gcd(int a, int b){
    if (a<b){
        swap(a,b);
    }
    if (b == 0) return a;
    return gcd(b, a%b);
}

void solve()
{
    int len;
    cin>>len;
    map<int, int> mp;
    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        mp[x] = i+1;
    }
    int res= 0;
    for (int j = 1; j < 1001; j++)
    {
        for (int k = j; k < 1001; k++)
        {
            if (gcd(j, k) == 1){
                if(mp[j]>0 && mp[k]>0){
                    if (res < mp[j] + mp[k]){
                        res = mp[j] + mp[k];
                    }
                }
            }
        }
        
    }
    
    if (res>0) cout<<res<<endl;
    else cout<<-1<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    // cout<<gcd(6,10);
    return 0;
}