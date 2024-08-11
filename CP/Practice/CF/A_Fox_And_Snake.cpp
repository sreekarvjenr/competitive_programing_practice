#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<char>> res;
    for(int i = 1; i<=n; i++){
        vector<char> temp;
        if(i%2) temp = vector<char> (m, '#');
        else if (i % 4){
            temp = vector<char> (m - 1, '.');
            temp.push_back('#');
        }
        else{
            temp = vector<char> (m - 1, '.');
            temp.insert(temp.begin(), '#');
        }
        res.push_back(temp);
    }
    for(auto l: res){
        for(auto c: l){
            cout<<c;
        }
        cout<<endl;
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}