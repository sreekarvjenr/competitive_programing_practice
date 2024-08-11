#include <bits/stdc++.h>
using namespace std;

long long value(string s)
{
    long long res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'L')
            res += i;
        else
            res += (s.length() - i - 1);
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long org_val = value(s);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        string ss;
        ss = s;
        ss[i] = (s[i] == 'L') ? 'R' : 'L';
        int diff;
        if (ss[i] == 'L')
        {
            diff = i - (n - i - 1);
        }
        else diff = (n - i - 1) - i;
        


        arr[i] = diff;
        // cout<<ss<<endl;
    }
    sort(arr, arr+n);
    
    long long temp = org_val;
    for (int i = 0; i < n; i++)
    {
        if(arr[n - i - 1] > 0) temp += arr[n - i - 1];
        cout<<temp<<" ";
    }
    cout<<endl;
    
    
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}