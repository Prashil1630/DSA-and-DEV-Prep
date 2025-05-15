#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,flag=0;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)cin>>a[i];
    for (int i=0;i<n/2;i++){
        if(a[i]==a[n-i-1]) flag = 1;
    }
    if(flag==1) cout<<"YES";
    else cout<<"NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}