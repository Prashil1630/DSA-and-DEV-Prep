#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int q;
    cin >> q;
    vector<int> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        l--; r--;
        int ans = 0;

        for(int i = l; i <= r - k + 1; i++) {
            ans += prefix[i + k] - prefix[i];
        }
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