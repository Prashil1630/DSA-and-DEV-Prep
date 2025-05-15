#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    for (int i=0;i<n;i++) {
        for (int j=0;j<=i;j++) cout<<"*";
        cout<<"\n";
    }
    cout<<endl;
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