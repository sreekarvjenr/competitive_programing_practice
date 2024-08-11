#include<bits/stdc++.h>
using namespace std;

using ii = pair<int,int>;
#define F first
#define S second

int n, m;
vector<vector<char>> arr, dir;
vector<vector<int>> dish, dism;
ii st;
vector<ii> ex, mn;
vector<int> di = {0, 1, 0, -1};
vector<int> dj= {1, 0, -1, 0};
vector<char> mov = {'R', 'D', 'L', 'U'}, path;

// int isExit(int i, int j){#include<bits/stdc++.h>
using namespace std;

using ii = pair<int,int>;
#define F first
#define S second

int n, m;
vector<vector<char>> arr, dir;
vector<vector<int>> dish, dism;
ii st;
vector<ii> ex, mn;
vector<int> di = {0, 1, 0, -1};
vector<int> dj= {1, 0, -1, 0};
vector<char> mov = {'R', 'D', 'L', 'U'}, path;

// int isExit(int i, int j){
//     return ((i == n-1 || j == m - 1 || i == 0 || j == 0) && (arr[i][j] == '.'));
// }

int check(ii x){
    return x.F<n && x.S<m && x.F>=0 && x.S>= 0 && arr[x.F][x.S]=='.';
}

void bfs(ii nd, vector<vector<int>> &dis){
    queue<ii> bfsq;
    dis[nd.F][nd.S] = 0;
    bfsq.push(nd);
    while(!bfsq.empty()){
        ii x = bfsq.front();
        bfsq.pop();
        for (int k = 0; k < 4; k++)
        {
            if(check({x.F+di[k], x.S+dj[k]}) && (dis[x.F+di[k]][x.S+dj[k]] > dis[x.F][x.S] + 1)){
                dis[x.F+di[k]][x.S+dj[k]] = dis[x.F][x.S] + 1;
                if(nd.F==st.F && nd.S==st.S) dir[x.F+di[k]][x.S+dj[k]] = mov[k];
                bfsq.push({x.F+di[k], x.S+dj[k]});
            }
        }
    }
}

void solve()
{
    cin>>n>>m;
    arr.resize(n);
    dish = vector<vector<int>> (n, vector<int>(m, 1e9));
    dism = vector<vector<int>> (n, vector<int>(m, 1e9));
    dir = vector<vector<char>> (n, vector<char>(m, '-'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin>>x;
            if(x == 'A') {
                st = {i,j};
                x = '.';
            }
            arr[i].push_back(x);
            if(x == 'M') mn.push_back({i,j});
            if ((i == n-1 || j == m - 1 || i == 0 || j == 0) && (arr[i][j] == '.')) ex.push_back({i,j});
        }
    }
    // cout<<st.F<<st.S;
    bfs(st, dish);
    int flag = 0;
    for(auto e: ex){
        if(dish[e.F][e.S] < 1e9) {
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
        return;
    }
    for(auto mns: mn){
        bfs(mns, dism);
        // cout<<mns.F<<" "<<mns.S<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(dish[i][j] < 1e9) cout<<dish[i][j] << " ";
    //         else cout << "i" << " ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(dism[i][j] < 1e9) cout<<dism[i][j] << " ";
    //         else cout << "i" << " ";
    //     }
    //     cout<<endl;
    // }
    int check = 0;
    ii exf;
    for(auto exi: ex){
        if(dish[exi.F][exi.S] < 1e9){
            check = 1;
            ii nd = exi;
            while(!(nd.F == st.F && nd.S == st.S)){
                if(dism[nd.F][nd.S] > dish[nd.F][nd.S]){
                    int ind = find(mov.begin(), mov.end(), dir[nd.F][nd.S]) - mov.begin();
                    nd.F -= di[ind];
                    nd.S -= dj[ind];
                }
                else{
                    check = 0;
                    break;
                }
            }
            if(!check) continue;
            else{
                exf.F = exi.F;
                exf.S = exi.S;
                break;
            }
        }
    }
    // cout<<exf.F<<exf.S<<endl;
    if(check){
        cout<<"YES"<<endl;
        cout<<dish[exf.F][exf.S]<<endl;
        ii te = exf;
        while(!(te.F == st.F && te.S == st.S )){
            path.push_back(dir[te.F][te.S]);
            int ind = find(mov.begin(), mov.end(), dir[te.F][te.S]) - mov.begin();
            te.F -= di[ind];
            te.S -= dj[ind];
        }
        reverse(path.begin(), path.end());
        for(auto p: path){
            cout<<p;
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<dir[i][j];
    //     }
    //     cout<<endl;
    // }

    // int check = 1;
    // for(auto e: ex){
    //     bfs(e);
    //     for(auto mns: mn){
    //         if(dis[mns.F][mns.S] < dis[st.F][st.S]) {
    //             check = 0;
    //             break;
    //         }
    //     }
    //     if(!check) break;
    // }
    // // cout<<check<<endl;
    

    // bfs(ex[0]);
    // cout<<ex[0].F<<ex[0].S<<endl;
    
    // vector<int> stex;
    // for(auto v: ex){
    //     stex.push_back(dis[v.F][v.S]);
    // }
    // vector<vector<int>> mnex.resize(mn.size());
    // for (int i = 0; i < mn.size(); i++)
    // {
    //     bfs(mn[i]);
    //     for(auto e: ex){
    //         mnex[i].push_back(dis[e]);
    //     }
    // }
    

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}
//     return ((i == n-1 || j == m - 1 || i == 0 || j == 0) && (arr[i][j] == '.'));
// }

int check(ii x){
    return x.F<n && x.S<m && x.F>=0 && x.S>= 0 && arr[x.F][x.S]=='.';
}

void bfs(ii nd, vector<vector<int>> &dis){
    queue<ii> bfsq;
    dis[nd.F][nd.S] = 0;
    bfsq.push(nd);
    while(!bfsq.empty()){
        ii x = bfsq.front();
        bfsq.pop();
        for (int k = 0; k < 4; k++)
        {
            if(check({x.F+di[k], x.S+dj[k]}) && (dis[x.F+di[k]][x.S+dj[k]] > dis[x.F][x.S] + 1)){
                dis[x.F+di[k]][x.S+dj[k]] = dis[x.F][x.S] + 1;
                if(nd.F==st.F && nd.S==st.S) dir[x.F+di[k]][x.S+dj[k]] = mov[k];
                bfsq.push({x.F+di[k], x.S+dj[k]});
            }
        }
    }
}

void solve()
{
    cin>>n>>m;
    arr.resize(n);
    dish = vector<vector<int>> (n, vector<int>(m, 1e9));
    dism = vector<vector<int>> (n, vector<int>(m, 1e9));
    dir = vector<vector<char>> (n, vector<char>(m, '-'));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char x;
            cin>>x;
            if(x == 'A') {
                st = {i,j};
                x = '.';
            }
            arr[i].push_back(x);
            if(x == 'M') mn.push_back({i,j});
            if ((i == n-1 || j == m - 1 || i == 0 || j == 0) && (arr[i][j] == '.')) ex.push_back({i,j});
        }
    }
    // cout<<st.F<<st.S;
    bfs(st, dish);
    int flag = 0;
    for(auto e: ex){
        if(dish[e.F][e.S] < 1e9) {
            flag = 1;
            break;
        }
    }
    if(!flag){
        cout<<"NO"<<endl;
        return;
    }
    for(auto mns: mn){
        bfs(mns, dism);
        // cout<<mns.F<<" "<<mns.S<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(dish[i][j] < 1e9) cout<<dish[i][j] << " ";
    //         else cout << "i" << " ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         if(dism[i][j] < 1e9) cout<<dism[i][j] << " ";
    //         else cout << "i" << " ";
    //     }
    //     cout<<endl;
    // }
    int check = 0;
    ii exf;
    for(auto exi: ex){
        if(dish[exi.F][exi.S] < 1e9){
            check = 1;
            ii nd = exi;
            while(!(nd.F == st.F && nd.S == st.S)){
                if(dism[nd.F][nd.S] > dish[nd.F][nd.S]){
                    int ind = find(mov.begin(), mov.end(), dir[nd.F][nd.S]) - mov.begin();
                    nd.F -= di[ind];
                    nd.S -= dj[ind];
                }
                else{
                    check = 0;
                    break;
                }
            }
            if(!check) continue;
            else{
                exf.F = exi.F;
                exf.S = exi.S;
                break;
            }
        }
    }
    // cout<<exf.F<<exf.S<<endl;
    if(check){
        cout<<"YES"<<endl;
        cout<<dish[exf.F][exf.S]<<endl;
        ii te = exf;
        while(!(te.F == st.F && te.S == st.S )){
            path.push_back(dir[te.F][te.S]);
            int ind = find(mov.begin(), mov.end(), dir[te.F][te.S]) - mov.begin();
            te.F -= di[ind];
            te.S -= dj[ind];
        }
        reverse(path.begin(), path.end());
        for(auto p: path){
            cout<<p;
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cout<<dir[i][j];
    //     }
    //     cout<<endl;
    // }

    // int check = 1;
    // for(auto e: ex){
    //     bfs(e);
    //     for(auto mns: mn){
    //         if(dis[mns.F][mns.S] < dis[st.F][st.S]) {
    //             check = 0;
    //             break;
    //         }
    //     }
    //     if(!check) break;
    // }
    // // cout<<check<<endl;
    

    // bfs(ex[0]);
    // cout<<ex[0].F<<ex[0].S<<endl;
    
    // vector<int> stex;
    // for(auto v: ex){
    //     stex.push_back(dis[v.F][v.S]);
    // }
    // vector<vector<int>> mnex.resize(mn.size());
    // for (int i = 0; i < mn.size(); i++)
    // {
    //     bfs(mn[i]);
    //     for(auto e: ex){
    //         mnex[i].push_back(dis[e]);
    //     }
    // }
    

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}