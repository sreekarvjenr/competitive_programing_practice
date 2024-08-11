#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int temp = 1, maxa = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]){
            temp++;
        }
        else{
            maxa = max(maxa, temp);
            temp = 1;
        }
    }
    maxa = max(temp, maxa);
    cout<<maxa<<endl;
}

signed main(){
    solve();
}