#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    // one zero  
    // no. of ones = no. of n's
    // no. of zeroes = no. of z's
    vector<int> arr(26, 0);
    for(auto c: s) arr[c - 'a']++;
    vector<int> res;
    while(arr['n' - 'a']){
        res.push_back(1);
        arr['n' - 'a']--;
    }
    while(arr['z' - 'a']){
        res.push_back(0);
        arr['z' - 'a']--;
    }
    for(auto x: res) cout<< x<< " ";
    cout<<endl;

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}