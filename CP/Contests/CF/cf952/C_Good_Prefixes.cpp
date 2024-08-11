#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    int sum = 0, res = 0;
    vector<int> arr(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        mp[arr[i]]++;
        if(sum%2) continue;
        if(mp.find(sum/2)!= mp.end()){
            
            res++;
        }
    }
    cout<<res<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}