#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second

int n, m;
pair<int,int> st, en;
vector<string> arr;
vector<vector<int>> vis(1010, vector<int>(1010, 0)), dis;
vector<vector<char>> par;
vector<int> di = {-1, 0, 1, 0};
vector<int> dj = {0, -1, 0, 1};
vector<char> mov = {'U', 'L', 'D', 'R'};


void printpath(pair<int,int> en){
    if(en.F == st.F && en.S==st.S) return;
    auto it = find(mov.begin(), mov.end(), par[en.F][en.S]);
    int ind = it - mov.begin();
    printpath({en.F - di[ind], en.S - dj[ind]});
    cout<<par[en.F][en.S];
}

int check(int i, int j){
    return i<n && j<m && i>=0 && j>=0 && arr[i][j]=='.';
}

void bfs(pair<int,int> st){
    queue<pair<int,int>> q;
    dis = vector<vector<int>> (n, vector<int>(m, 1e9));
    par = vector<vector<char>> (n, vector<char>(m, '-'));

    dis[st.F][st.S] = 0;
    q.push(st);
    while (!q.empty())
    {
        auto pos = q.front();
        q.pop();
        for (int k = 0; k < 4; k++)
        {
            pair<int,int> newpos = {pos.F + di[k], pos.S+dj[k]};
            if(check(newpos.F, newpos.S) && dis[newpos.F][newpos.S] > dis[pos.F][pos.S] + 1){
                dis[newpos.F][newpos.S] = dis[pos.F][pos.S] + 1;
                par[newpos.F][newpos.S] = mov[k];
                q.push(newpos);
            }
        }
        
    }
    

}

void solve()
{
    cin >> n >> m;
    arr.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == 'A'){
                st.F = i;
                st.S = j;
            }
            if(arr[i][j] == 'B'){
                en.F = i;
                en.S = j;
                arr[i][j] = '.';
            }
        }
    }
    bfs(st);
    if(dis[en.F][en.S] < 1e9){
        cout<<"YES"<<endl;
        cout<<dis[en.F][en.S]<<endl;
        printpath(en);
    }
    else cout<<"NO"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<par[i][j];
    //     }
    //     cout<<endl;
    // }
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}