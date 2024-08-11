#include<bits/stdc++.h>
using namespace std;

int findc(string &s, int ind, char c){
    for (int i = ind; i < s.size(); i++)
    {
        if(s[i] == c){
            return i;
        }
    }
    return -1;
}

void solve()
{
    string a, b;
    cin>>a;
    cin>>b;
    int ans = a.size() + b.size(), mx = 0;
    for (int i = 0; i < b.size(); i++)
    {
        int a_track = i;
        // longest substring of b which is a subsequence in a = mx
        for(auto c : a){
            if(a_track < b.size() && b[a_track]==c){
                a_track++;
            }
        }
        mx = max(mx, a_track - i);
    }
    cout<<ans - mx<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}