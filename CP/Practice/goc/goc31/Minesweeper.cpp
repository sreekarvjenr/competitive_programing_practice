#include<bits/stdc++.h>
using namespace std;

#define int long long

int n, m, x;
vector<string> arr;
vector<vector<int>> vis;
vector<int> di = {0, 1, 0, -1};
vector<int> dj = {1, 0, -1, 0};
int ans;

int check(int i, int j){
    return i>=0 && i<n && j>=0 && j<m && arr[i][j]=='1';
}

void rec(int i, int j, int cnt, int trem){
    int t = (vis[i][j]==0);
    vis[i][j] += 1;

    if(i==0 && j==0){
        ans = max(ans, cnt + t);
    }

    if(trem == 0){
        vis[i][j] -= 1;
        return;
    }
    for (int k = 0; k < 4; k++)
    {
        int ni = i + di[k];
        int nj = j + dj[k];
        if(check(ni,nj)){
            rec(ni, nj, cnt + t, trem - 1);
        }
    }
    vis[i][j] -= 1;
}

void solve()
{
    cin>>n>>m>>x;
    arr.resize(n);
    vis = vector<vector<int>> (n, vector<int>(m,0));
    ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    rec(0, 0, 0, x);
    cout<<ans<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}