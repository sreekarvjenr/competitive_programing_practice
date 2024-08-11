#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<string> s;
    string res = "";
    for (int i = 0; i < n; i++)
    {
        string st;
        cin>>st;
        s.push_back(st);
    }
    map<string, bool> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s[i].length() - 1; j++)
        {
            string x = s[i].substr(j+1, 0);
            string y = s[i].substr(s[i].length()-j-1, j+1);
            int c = mp[x] && mp[y];
            if(c) res += to_string(c);
        }
        
        
    }
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}