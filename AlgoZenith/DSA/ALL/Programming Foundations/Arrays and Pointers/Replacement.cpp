#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if (a[i]>0)a[i]=1;
        else if (a[i]<0)a[i]=2;
        else a[i]=0;
    }
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}