#include <bits/stdc++.h>
using namespace std;
#define int long long

void printv(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve()
{
    int n;
    cin >> n;
    int total = (n * (n + 1)) / 2;
    if (total % 2)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        int half = total / 2;
        int setsum = 0;
        vector<int> set1;
        vector<int> vis(n + 1, 0);
        int maxel = n;
        while (setsum < half)
        {
            if (maxel + setsum <= half)
            {
                set1.push_back(maxel);
                vis[maxel] = 1;
                setsum += maxel;
            }
            else{
                set1.push_back(half - setsum);
                vis[half - setsum] = 1;
                setsum = half;
            }
            maxel--;
        }
        cout<<set1.size()<<endl;
        printv(set1);
        cout<<n - set1.size()<<endl;
        vector<int>set2;
        for (int i = 1; i < n + 1; i++)
        {
            if(vis[i] == 0) set2.push_back(i);
        }
        printv(set2);
        
    }
   
}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //    int t;cin>>t;while(t--)
    solve();
}