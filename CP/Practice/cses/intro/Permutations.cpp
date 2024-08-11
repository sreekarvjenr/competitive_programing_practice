#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else if(n <= 3) cout<<"NO SOLUTION"<<endl;
    else{
        // if(n==4){
        //     cout<< "3 1 4 2"<<endl;
        // }
        // else if(n == 5){
        //     cout<<"4 2 5 3 1"<<endl;
        // }
        // else{
        //     string s = "4 2 5 3 1";
        //     int flag = 1;
        //     for (int i = 6; i < n + 1; i++)
        //     {
        //         if(flag){
        //             string temp = to_string(i) + " ";
        //             s.insert(0, temp);
        //             flag = 0;
        //         }
        //         else{
        //             string temp = " " + to_string(i);
        //             s+=temp;
        //             flag = 1;
        //         }
        //     }
        //     cout<<s<<endl;
        // }
        for (int i = 1; i <= n/2; i++)
        {
            cout<<2*i<<" ";
        }
        for (int i = 0; 2*i+1<=n; i++)
        {
            cout<<2*i+1<<" ";
        }
        cout<<endl;

        
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}