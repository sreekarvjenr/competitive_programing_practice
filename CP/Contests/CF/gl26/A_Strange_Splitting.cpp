#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<char> res(n);
    if(arr[0] == arr[n - 1]) {
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        for (int i = 0; i < n; i++)
        {
            res[i] = 'B';
        }
        res[n/2] = 'R';
        for (int i = 0; i < n; i++)
        {
            cout<<res[i];
        }
        cout<<endl;
        

    }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}