#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    map<int, int> mp;
    long long res = 0;
    for (int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        x -= i;
        res += mp[x];
        mp[x]++;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}