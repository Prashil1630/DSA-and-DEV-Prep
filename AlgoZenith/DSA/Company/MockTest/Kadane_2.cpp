#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, m , k;
    cin >> n >> m >> k;
    int a[n][m];
    for(int i = 0; i< n; i++) {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }
    int max_area = 0;
    for(int top = 0; top < n; top++) {
        vector<int> colsum(m, 0);
        for(int bot = top; bot < n; bot++) {
            for(int j = 0; j < m; j++) {
                colsum[j] += a[bot][j];
            }

            set<int> prefixsums;
            prefixsums.insert(0);
            int currsum = 0;
            for(int j = 0; j < m; j++) {
                currsum += colsum[j];
                auto it = prefixsums.lower_bound(currsum - k);
                if(it != prefixsums.end()) {
                    int width = j + 1 - distance(prefixsums.begin(), prefixsums.find(*it));
                    int height = bot - top + 1;
                    max_area = max(max_area, width * height);
                }
                prefixsums.insert(currsum);
            }
        }

    }
    cout << max_area << "\n";
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