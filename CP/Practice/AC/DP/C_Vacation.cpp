#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100100][3];
int dp[100100][3];

int rec(int i, int x){
    if(dp[i][x]!=-1){
        return dp[i][x];
    }

    if(i==0){
        dp[0][x] = arr[0][x];
        return arr[0][x];
    }

    dp[i][x] = arr[i][x] + max(rec(i - 1, (x+1)%3) ,rec(i - 1, (x+2)%3));
    return dp[i][x];

    // switch(x){
    //     case 0:
    //         dp[i][x] = arr[i][0] + max(rec(i - 1, 1), rec(i - 1, 2));
    //         return arr[i][0] + max(rec(i - 1, 1), rec(i - 1, 2));
    //     case 1:
    //         dp[i][x] = arr[i][1] + max(rec(i - 1, 0), rec(i - 1, 2));
    //         return arr[i][1] + max(rec(i - 1, 0), rec(i - 1, 2));
    //     case 2:
    //         dp[i][x] = arr[i][2] + max(rec(i - 1, 0), rec(i - 1, 1));
    //         return arr[i][2] + max(rec(i - 1, 0), rec(i - 1, 1));
    //     default:
    //         break;
        
    // }
}

void solve(){
    memset(dp, -1, sizeof(dp));
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }
    int ans = 0;
    for (int i = 0; i < 3; i++)
    {
        ans =  max(ans, rec(n-1, i));
    }
    cout<<ans<<endl;
    
    
    
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}