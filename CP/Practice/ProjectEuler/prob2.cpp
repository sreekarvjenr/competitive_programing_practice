#include<bits/stdc++.h>
using namespace std;


// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with and , the first terms will be:
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

void solve()
{
    long long sum = 0;
    int a = 1;
    int b = 2;
    while(b <= 4000000){
        if(b%2==0)sum += b*1LL;
        int temp = b;
        b = a + b;
        a = temp;
    }
    cout<<sum<<endl;
}


int main()
{ 
    solve();

}