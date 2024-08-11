#include<bits/stdc++.h>
using namespace std;


int check(int i, int j, int n, int m){
    return i < n && j < m && i>=0 && j>=0;
}

int isit(int i, int j, vector<vector<int>> &a){
    vector<int> di = {0, 1, 0, -1};
    vector<int> dj = {1, 0 , -1, 0};
    int res = 1e9;
    for (int k = 0; k < 4; k++)
    {
        int ni = i + di[k];
        int nj = j + dj[k];
        if(check(ni, nj, a.size(), a[0].size())){
            res = min(res, a[i][j] - a[ni][nj]);
        }
    }
    if(res<0) res = 0;
    return res;
    
}

void solve()
{
    int n, m;
    cin>>n>>m;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin>>x;
            arr[i].push_back(x);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            while(isit(i,j,arr)){
                int temp = isit(i,j,arr);
                arr[i][j] -= temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}