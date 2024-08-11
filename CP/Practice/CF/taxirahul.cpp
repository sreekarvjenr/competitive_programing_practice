#include<bits/stdc++.h>
using namespace std;
int main(){int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
sort(a,a+n,greater<int>());
int l=0;
int r=n-1;
int ans=0;
while(l<=r){
    if(a[l]==4) {ans++;l++;}
    else if(a[l]==3){
        if(a[r]==1){r--;}
        ans++;
        l++;
    }
    else if(a[l]==2){
        if(a[l+1]==2){ans++;l++;}
        else if(a[r]==1 &&a[r-1]==1){ans++;r-=2;}
        else if(a[r]==1){ans++;r--;}
        else{ans++;}
        l++;
    }
    else{
        if(a[l]==1){
            if(a[r]==1){
                r--;
                if(a[r]==1){
                    r--;
                }
                if(a[r]==1){
                    r--;
                }
            }
            ans++;
            l++;
        }
    }
}
cout<<ans<<endl;

}