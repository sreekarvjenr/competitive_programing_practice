#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n, q;
    cin >> n;
    int x[n], m[q];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> m[i];
        int res = 0;
        for (int j = 0; j < n; j++)
        {
            if (x[j] <= m[i])
            {
                res++;
            }
            else
            {
                break;
            }
        }
        cout << res << endl;
    }
}

int main()
{
    solve();
    return 0;
}