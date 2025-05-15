#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(j==n-i+1 || j==n+i-1) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=2*n-1;j++){
            if(j==n-i+1 || j==n+i-1) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
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