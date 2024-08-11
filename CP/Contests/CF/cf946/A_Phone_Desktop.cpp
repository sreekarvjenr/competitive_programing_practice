#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a, b;
    cin >> a >> b;
    int ans = 0;
    ans += ((b / 2) + (b%2));
    int temp = ans;
    while (temp)
    {
        if(a - 7 >= 0) a -= 7;
        temp--;
        if(temp == 1 && b%2==1){
            if(a >= 4) a-= 4;
            else if(a < 4) a = 0;
        }
    }
    if( a > 0) ans++;
    cout<<ans<<endl;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--) solve();
}