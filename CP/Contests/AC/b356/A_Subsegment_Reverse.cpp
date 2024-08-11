#include<bits/stdc++.h>
using namespace std;


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, l, r;
    cin>>n>>l>>r;
    for (int i = 1; i < l; i++)
    {
        cout << i << " ";
    }
    for (int i = r; i > l - 1; i--)
    {
        cout<< i << " ";
    }
    for (int i = r + 1; i <= n; i++)
    {
        cout<< i<< " ";
    }
    cout<< endl;
    
    

}