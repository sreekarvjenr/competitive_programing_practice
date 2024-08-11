#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    vector<int> arr, seq;
    cin>>n;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(seq.begin(), seq.end(), arr[i]);
        if(it == seq.end()){
            seq.push_back(arr[i]);
        }
        else{
            seq[it - seq.begin()] = arr[i];
        }
    }
    cout<<seq.size()<<endl;


    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}