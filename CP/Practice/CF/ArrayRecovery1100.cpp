#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int len, _;
    cin >> len;
    int d[len],a[len];
    for (int i = 0; i < len; i++)
    {
        cin >> d[i];
    }
    a[0] = d[0];
    for (int k = 1; k < len; k++)
    {
        if((d[k]!=0) && (a[k-1] - d[k] >=0)) {
            cout<<-1<<endl;
            return;
        }
        else{
            a[k] = a[k-1] + d[k];
        }

    }
    

    
    for (int j = 0; j < len; j++)
    {
        cout << a[j]<< " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}