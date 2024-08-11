#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<char>> arr(1010, vector<char>(1010, '-'));
vector<vector<int>> vis(1010, vector<int>(1010, 0));
int cnt = 0;
vector<int> dx = {-1, 0, 1, 0};
vector<int> dy = {0, -1, 0, 1};

int check(int x, int y)
{
    return x < n && y < m && x >= 0 && y >= 0;
}

void dfs(int i, int j)
{

    vis[i][j] = cnt;
    // cout<<i<<j<<endl;
    for (int k = 0; k < 4; k++)
    {
        if (check(i + dx[k], j + dy[k]) && arr[i + dx[k]][j + dy[k]] == '.')
        {
            if (!vis[i + dx[k]][j + dy[k]])
            {
                // cout<<i + dx[k]<<j + dy[k]<<endl;
                vis[i + dx[k]][j + dy[k]] = cnt;
                dfs(i + dx[k], j + dy[k]);
            }
        }
    }

}
void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] == '.')
            {
                cnt++;
                dfs(i, j);
            }
        }
    }
    cout << cnt << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<vis[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //    int t;cin>>t;while(t--)
    solve();
}