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
        int flag = 0;
        for (int j = 0; j < s[i].length() - 1; j++)
        {
            string x = s[i].substr(0, j+1);
            string y = s[i].substr(j+1, s[i].length()-j-1);
            int c = mp[x] && mp[y];
            if(c) {
                res += to_string(c);
                flag = 1;
                break;
                }
        }
        if(flag == 0) res+="0";
        
        
    }
    cout<<res<<endl;
    
}

int main(){
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}