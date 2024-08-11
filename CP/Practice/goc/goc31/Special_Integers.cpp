#include<bits/stdc++.h>
using namespace std;

int summ(int x){
    int res = 0;
    while (x > 0)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
    
}

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    vector<int> ans;
    int x;
    for (int i = 0; i < 82; i++)
    {
        x = b * pow(i, a) * 1LL+ c * 1LL;
        if(x >= 0 && x<=1e9 && summ(x)==i) ans.push_back(x);
    }
    if(ans.size()){
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<endl;
    for(auto c: ans) cout<< c<<" ";
    cout<<endl;
    }
    else cout<<-1<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}