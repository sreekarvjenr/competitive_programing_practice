#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> ind(m);
    for (int i = 0; i < m; i++)
    {
        cin>>ind[i];
    }
    string c;
    cin>>c;
    sort(c.begin(), c.end());
    sort(ind.begin(), ind.end());

    int i = 0, op = 0;
    while(i<m){
        if(i){
            if(ind[i - 1] == ind[i]){
                i++;
                continue;
            }
        }
        s[ind[i] - 1] = c[op];
        i++;op++;
    }
    cout<<s<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}