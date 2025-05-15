#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    bool flag = false;
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for(int i = 1; i < n; i++){
        if(abs(a[i-1] - a[i]) == 1) flag = true;
    }
    if(flag) cout << "yes\n";
    else cout << "no\n";

}

signed main() {
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