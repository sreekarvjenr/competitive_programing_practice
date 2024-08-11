#include<bits/stdc++.h>
using namespace std;

// Knapsack problem.
// maximum number of pages u can acquire ?
// dp[i][j] = maximum no. of pages for first i books, with money j.
// dp[i][j] = max(dp[i - 1][j], pages[i] + dp[i - 1][j - price[i]]) 
// TC = 2 x 10^8
// one book can be bought atmost once.
// base cases ?
// dp[anything][0] = 0. 
// need space optimization.
// dp[i][anything] depends on dp[i - 1][something].
// update the same 1D dp array n times.
// Space complexity = O(x).


#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    for (int& p : price) cin >> p;
    for (int& p : pages) cin >> p;

    vector<int> dp(x + 1, 0);

    for (int i = 0; i < n; ++i) {
        for (int j = x; j >= price[i]; --j) {
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }

    cout << dp[x] << '\n';
}

signed main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
}

// int n, x;
// vector<int> price;
// vector<int> pages;
// vector<vector<int>> dp;

// int rec(int i, int j){
//     if(dp[i][j] != -1){
//         return dp[i][j];
//     }
//     if(j == 0 || i == 0){
//         return dp[i][j] = 0;
//     }
//     dp[i][j] = rec(i - 1, j);
//     if(j >= price[i - 1]) dp[i][j] = max(dp[i][j] , pages[i - 1] + rec(i - 1, j - price[ i - 1]));
//     return dp[i][j];
// }

// void solve()
// {
//     cin>>n>>x;
//     price.resize(n);
//     pages.resize(n);
//     dp = vector<vector<int>> (n + 1, vector<int>(x + 1, -1));
//     for(int& v: price) cin>>v;
//     for(int& v: pages) cin>>v;
//     cout<<rec(n, x)<<'\n';
// }


// signed main()
// {
//    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// //    int t;cin>>t;while(t--)
//        solve();
// }
