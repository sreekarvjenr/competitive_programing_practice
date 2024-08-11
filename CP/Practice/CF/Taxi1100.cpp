#include "bits/stdc++.h"
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    /*for(int i=0;i<n;i++){
        if(mp[s])
    }*/
    int ans = 0;
    // ans = mp[3] + ceil((double(mp[1])/2)) + max(mp[2], mp[1]);
    ans += mp[4];
    // cout << ans << endl;
    mp[4] = 0;
    if (mp[1] < mp[3])
    {
        ans += mp[1];
        // cout << ans << endl;
        mp[3] -= mp[1];
        mp[1] = 0;
    }
    else
    {
        ans += mp[3];
        // cout << ans << endl;

        mp[1] -= mp[3];
        mp[3] = 0;
    }
    if (mp[3] > 0)
    {
        ans += mp[3];
        // cout << ans << endl;

        mp[3] = 0;
    }

    ans += (mp[2] / 2);
    // cout << ans << endl;

    mp[2] -= 2 * (mp[2] / 2);

    if ((mp[1] > 0) && (mp[2] > 0))
    {
        
        if (mp[1] > mp[2])
        {
            ans += mp[2];
            // cout << ans << endl;

            mp[1] -= mp[2];
            mp[2] = 0;
        }
        else
        {
            ans += mp[1];
            // cout << ans << endl;

            mp[2] -= mp[1];
            mp[1] = 0;
        }
    }
    if(mp[2]>0) ans+= mp[2];

    if(mp[1]>0){
        ans += ceil(double(mp[1])/4);
    }
    cout << ans << endl;
}

int main()
{
    solve();
    return 0;
}