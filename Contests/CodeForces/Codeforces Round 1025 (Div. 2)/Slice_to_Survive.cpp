#include <bits/stdc++.h>
using namespace std;
#define int long long

int ceil_log2(int x) {
    if (x <= 1) return 0;
    return 64 - __builtin_clzll(x - 1);
}

void solve() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int option1 = ceil_log2(m) + min(ceil_log2(a), ceil_log2(n - a + 1));
    int option2 = ceil_log2(n) + min(ceil_log2(b), ceil_log2(m - b + 1));

    cout << 1 + min(option1, option2) << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
