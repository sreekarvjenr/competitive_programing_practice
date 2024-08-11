#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while (n > 1)
    {
        if(n % 2) {
            n = 3*n+1;
            cout<<n<<" ";
        }
        else{
            n = n/2;
            cout<<n<<" ";
        }
    }
    
}
signed main(){

    solve();
}