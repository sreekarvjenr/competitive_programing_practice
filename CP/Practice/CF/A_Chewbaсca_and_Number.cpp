#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(i ==0 && s[i] == '9') continue;
        if(s[i] > 9 - (s[i] - '0') + '0') s[i] = (9 - (s[i] - '0') + '0');
    }
    
    // int x = stoi(s);
    cout<<s;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}