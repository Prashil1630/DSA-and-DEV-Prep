#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++) cout<<"  ";
        for(int j=1;j<=i;j++) cout<<j<<" ";
        for(int j=i-1;j>=1;j--) cout<<j<<" ";
        for(int j=1;j<=n-i;j++) cout<<"  ";
        cout<<"\n";

    }
    cout<<"\n";
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