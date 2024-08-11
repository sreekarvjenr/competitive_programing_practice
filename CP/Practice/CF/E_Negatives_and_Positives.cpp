#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int len;
    cin >> len;
    long long arr[len];
    int neg = 0;
    long long mine, res;
    res = 0;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
        if (arr[i] < 0)
            neg++;
        arr[i] = (arr[i]<0)? -1*arr[i] : arr[i] ;
        if(i==0) {
            mine = (arr[0]);
            }
        mine = min(mine, arr[i]);
        res += arr[i];
    }
    if(neg%2==1){
        res -= 2*mine;
    }
    cout<<res<<endl;
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