#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin>>n>>m;
    int a[m];
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
    }
    int x[m];
    for (int i = 0; i < m; i++)
    {
        x[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int temp;
            cin>>temp;
            x[j] += temp;
        }
        
    }
    for (int i = 0; i < m; i++)
    {
        if(x[i] < a[i]){
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}