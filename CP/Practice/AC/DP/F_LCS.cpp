// // You are given strings s and t. 
// // Find one longest string that is a subsequence of both s and t.

#include<bits/stdc++.h>
using namespace std;

string s;
string t;
vector<vector<vector<char>>> dp;

// vector<char> rec(int i, int j){
//     if(i == 0 || j == 0){
//         return {};
//     }
//     if(dp[i][j].size() > 0) return dp[i][j];
//     if(s[i-1] == t[j-1]){
//         vector<char> temp = rec(i - 1, j - 1);
//         temp.push_back(s[i-1]);
//         dp[i][j] = temp;
//         return dp[i][j];
//     }
//     else{
//         vector<char> temp1 = rec(i, j - 1);
//         vector<char> temp2 = rec(i - 1, j);
//         if(temp1.size() > temp2.size()){
//             dp[i][j] = temp1;
//             return dp[i][j];
//         }
//         else{
//             dp[i][j] = temp2;
//             return dp[i][j];
//         }
//     }
// }


// storing dp[i][j] as the vector of char of longest subsequence of s[:i] and t[:j]: TLE in recursive dp because of heavy recurion calls.
// storing dp[i][j] as the vector of char of longest subsequence of s[:i] and t[:j]: RE in iterative dp because of memory limit.

// algo change.
// store the length in dp array.
// start i = 0 to ns, j = 0 to nt
// if(si == tj) add the letter to res, i++ j++
// else, if ( dp[i + 1][j] > dp[i][j+1]) i++
// else, if ( dp[i + 1][j] < dp[i][j+1]) j++
// else if both are equal ?
// wont work either.

// i from 0 to ns/nt wont work.
//we should add the characters from the end.
// compare dp[i - 1][j] and dp[i][j - 1] to add.


void solve()
{
    cin>>s;
    cin>>t;
    int ns = s.size();
    int nt = t.size();
    vector<vector<int>> dp (ns + 1, vector<int>(nt + 1, 0));
    // cout<<endl;

    for (int i = 1; i < ns + 1; i++)
    {
        for (int j = 1; j < nt + 1; j++)
        {
            if(s[i - 1] == t[j - 1]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        
    }
    // cout<<dp[ns][nt]<<endl;

    // for (int i = 0; i < ns + 1; i++)
    // {
    //     for (int j = 0; j < nt + 1; j++)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    int i = ns, j = nt;
    string res = "";
    while(i > 0 && j > 0){
        if(s[i-1] == t[j-1]){
            res.push_back(s[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    reverse(res.begin(), res.end());
    cout<<res;
}

signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();
}


