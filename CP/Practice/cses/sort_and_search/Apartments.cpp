#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> A(n);
    vector<int> B(m);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int pB = 0, pA = 0, res = 0;
    while(pB < m && pA < n){
        if(abs(B[pB] - A[pA]) <= k){
            res++;
            pB++;
            pA++;
            continue;
        }
        if(B[pB] > A[pA]){
            pA++;
            continue;
        }
        if(B[pB] < A[pA]){
            pB++;
            continue;
        }
    }
    cout<<res<<endl;
    
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}