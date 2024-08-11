#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n + 1];
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        cin >> b[i];
        if (i < n)
        {
            ans += (abs(b[i] - a[i]) * 1LL);
        }
    }
    int diff = 1e9, ad = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] <= b[n] && b[n] <= b[i]) || (b[i] < b[n] && b[n] < a[i]))
        {
            ad = 1;
            break;
        }
        if (min(abs(b[n] - a[i]), abs(b[n] - b[i])) < diff)
        {
            diff = min(abs(b[n] - a[i]), abs(b[n] - b[i]));
            ad = diff + 1;
        }
    }
    ans += ad*1LL;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}