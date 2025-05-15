#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m+1]{};
    for(int i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]<=m) b[a[i]]++;
    }
    for (int i=1;i<=m;i++) cout <<b[i]<<endl;
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