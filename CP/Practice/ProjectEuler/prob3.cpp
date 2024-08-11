#include<bits/stdc++.h>
using namespace std;

// largest prime factor 600851475143

void solve()
{
    long long n = 600851475143;
    long long i = 1;
    while(n > 1){
        if(n % i == 0){
            n = n / i;
        }
        i++;
    }
    cout<<i-1<<endl;
}


int main()
{ 
  ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  int t = 1;
//   cin>>t;
 while(t--){
     solve();
 }
 return 0;x
}