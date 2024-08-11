#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<string> gene(int n){
    if(n == 1){
        return {"0", "1"};
    }
    vector<string> prev = gene(n - 1);
    vector<string> revprev = prev;
    reverse(revprev.begin(), revprev.end());
    vector<string> res;
    for (int i = 0; i < (int)pow(2, n); i++)
    {
        string temp;
        if(i < (int)pow(2, n - 1)){
            temp = "0" + prev[i];
        }
        else{
            temp = "1" + revprev[i - (int)pow(2, n - 1)];
        }
        res.push_back(temp);
    }
    return res;
    
}

void solve()
{
    int n;
    cin>>n;
    vector<string> gc = gene(n);
    for(auto c: gc){
        cout<<c<<endl;
    }

}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    int t;cin>>t;while(t--)
       solve();
}