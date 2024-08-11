#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int res = 0;
    while(n--){
        string s;
        cin>>s;
        switch(s[0]){
            case 'I':
                res += 20;
                break;
            case 'C':
            res += 6;
            break;
            case 'T':
            res += 4;
            break;
            case 'D':
            res += 12;
            break;
            case 'O':
            res += 8;
            break;

        }
    }
    cout<<res;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}