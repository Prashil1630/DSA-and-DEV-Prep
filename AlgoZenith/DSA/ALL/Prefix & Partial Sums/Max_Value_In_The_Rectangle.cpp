#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAX = 1002;
int partial[MAX][MAX]{};
int prefix[MAX][MAX]{};

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    while (q--) {
        int x1, x2, y1, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        partial[x1][y1] += c;
        partial[x2+1][y1] -= c;
        partial[x1][y2+1] -= c;
        partial[x2+1][y2+1] += c;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            prefix[i][j] = partial[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }
    int ans = 0, cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans = max(ans, prefix[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if(prefix[i][j] == ans) cnt++;
        }
    }
    cout << ans << " " << cnt << "\n";
            
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