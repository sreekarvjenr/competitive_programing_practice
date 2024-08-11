#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    string s;
    cin>>s;
    int n = s.size();
    vector<int> arr(26, 0);
    for (int i = 0; i < n; i++)
    {
        arr[s[i] - 'A']++;
    }
    
    vector<char> res(n, 'A');
    int oddcnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]%2) oddcnt++;
    }
    if(oddcnt>1){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    int i = 0;
    int ind = 0;
    while(i < 26){
        while(arr[i]>1){
            res[ind] = 'A' + i;
            res[n - 1 - ind] = 'A' + i;
            arr[i]-=2;
            ind++;
        }
        if(arr[i] == 1){
            res[n/2] = 'A' + i;
        }
        i++;
    }
    
    for(auto c: res){ 
        cout<<c;
    }
    cout<<endl;

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}