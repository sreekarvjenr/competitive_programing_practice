#include <bits/stdc++.h>
using namespace std;

long long calc(int arr[], int n) {
    long long zeroes = 0, ans = 0;
    for(int i = n - 1; i >= 0; --i) {
        if(arr[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n], arr2[n];
    int f0 = -1;
    int l1 = -1;
    for (int i = 0; i < n ; i++)
    {
        cin>>arr[i];
        arr1[i] = arr[i];
        arr2[i] = arr[i];
        if (arr[i] == 0){
            if(f0==-1){
                f0 = i;
            }
        }
        if (arr[i] == 1)
        {
            l1 = i;
        }
        
        
    }
    if(f0 != -1) arr1[f0] = 1;
    if(l1 != -1) arr2[l1] = 0;
    long long res = max(calc(arr1, n) , calc(arr2, n));
    res = max(res, calc(arr, n));
    cout<<res<<endl;
    
    
    
}


int main()
{ 
  ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  int t;
  cin>>t;
 while(t--){
     solve();
 }
 return 0;
}