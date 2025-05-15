#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> prefix(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) prefix[i] = a[i];
        else prefix[i] = prefix[i - 1] + a[i];
    }
    while(q--){
        int budget;
        cin >> budget;
        int ans = upper_bound(prefix.begin(), prefix.end(), budget) - prefix.begin();
        cout << ans << "\n";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}