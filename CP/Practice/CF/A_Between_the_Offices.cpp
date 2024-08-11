#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(s[i] == 'S' && s[i + 1]=='F') count++;
        if(s[i] == 'F' && s[i + 1]=='S') count--;
    }
    cout<< (count > 0? "YES" : "NO")<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}