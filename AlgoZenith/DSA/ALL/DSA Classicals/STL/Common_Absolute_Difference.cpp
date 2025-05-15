#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_map<int, int> um;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        um[a[i]]++;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        um[a[i]]--;
        ans += um[a[i] - k];
        ans += um[a[i] + k];        
    }
    cout << ans << "\n";
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