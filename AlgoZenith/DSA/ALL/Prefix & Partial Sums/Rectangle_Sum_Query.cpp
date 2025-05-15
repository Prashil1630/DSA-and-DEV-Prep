#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

int addMod(int a, int b) {
    return (a % mod + b % mod) % mod;
}

int subMod(int a, int b){
    return ((a % mod - b % mod) % mod + mod) % mod;
}

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    int a[n+1][m+1];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            a[i][j] = (a[i][j] + mod) % mod;
        }
    }

    int prefix[n+1][m+1]{};
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int ans = addMod(a[i][j], prefix[i-1][j]);
            ans = addMod(ans, prefix[i][j-1]);
            ans = subMod(ans, prefix[i-1][j-1]);
            prefix[i][j] = ans;
        }
    }
    while(q--){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = subMod(prefix[x2][y2], prefix[x1-1][y2]);
        ans = subMod(ans, prefix[x2][y1-1]);
        ans = addMod(ans, prefix[x1-1][y1-1]);
        cout << ans << '\n';
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