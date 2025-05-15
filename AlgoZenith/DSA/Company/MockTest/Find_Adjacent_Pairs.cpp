#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n; cin >> n;
    unordered_set<int> s;
    bool ans = false;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if(s.count(x - 1) || s.count(x + 1)) ans = true;
        s.insert(x);
    }

    if(ans) cout << "yes\n";
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