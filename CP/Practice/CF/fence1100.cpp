#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ind = 0;
    int sum = 0;
    for (int j = 0; j < k; j++)
    {
        sum += arr[j];
    }
    int min_sum = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum - arr[i-k] + arr[i];
        if (sum < min_sum)
        {
            min_sum = sum;
            ind = i - k + 1;
        }
    }
    cout << ind + 1 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    solve();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     int ans;
//     int sum = 0;
//     for (int i = 0; i < k; i++)
//         sum += a[i];
//     ans = sum;
//     int j = 0;
//     for (int i = k; i < n; i++)
//     {
//         sum -= a[i - (k)];
//         sum += a[i];
//         if (ans > sum)
//         {
//             ans = sum;
//             j = i - (k - 1);
//         }
//     }
//     cout << j + 1 << endl;

//     return 0;
// }