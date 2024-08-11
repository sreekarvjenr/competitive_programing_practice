#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(i){
            if(arr[i] < arr[i-1]){
                res += (arr[i - 1] - arr[i]);
                arr[i] = arr[i - 1];
            }
        }
    }
    cout<<res<<endl;   
}

signed main(){
    solve();
}