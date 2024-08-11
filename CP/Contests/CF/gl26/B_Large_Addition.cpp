#include<bits/stdc++.h>
using namespace std;

#define int long long
void solve()
{
    int n;
    cin>>n;
    bool flag = true;
    bool idk = (n<100);
    while(n > 0){
        int rem = n % 10;
        if(n>= 10 && n<=99){
            if(n>=11 - (int)idk && n<= 19 - (int)idk){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
        else if(flag){
            int sum = rem + 10;
            if(sum >= 10 && sum<=18){
                n /= 10;
                flag = false;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
         
        
        else{
            int sum = rem + 9;
            if(sum >= 10 && sum<=18){
                n /= 10;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }

    }
    cout<<"YES"<<endl;
}


signed main()
{
   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   int t;cin>>t;while(t--)
       solve();
}

