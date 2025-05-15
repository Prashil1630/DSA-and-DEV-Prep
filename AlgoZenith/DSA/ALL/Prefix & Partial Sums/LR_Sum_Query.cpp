#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod = 1e9+7;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> prefixsum(n, 0);
    prefixsum[0] = a[0] % mod;
    for (int i = 1; i < n; i++) {
        prefixsum[i] = (prefixsum[i - 1] + a[i]) % mod;
        if (prefixsum[i] < 0) prefixsum[i] += mod; 
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        if (l == 1) {
            cout << prefixsum[r - 1] << "\n";
        } else {
            cout << (prefixsum[r - 1] - prefixsum[l - 2] + mod) % mod << "\n";
        }
    }
}

// [12 -23 -123 2345 2345 44 345 -93945 -5353 1]

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