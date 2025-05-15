#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, d;
    cin >> n >> d;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int ans = d;
    unordered_map<int, int> freq;
    int cntdistinct = 0;

    for (int head = 0; head < n; head++) {
        if (freq[a[head]] == 0) cntdistinct++;
        freq[a[head]]++;
        if (head >= d) {
            freq[a[head - d]]--;
            if (freq[a[head - d]] == 0) cntdistinct--;
        }
        if (head >= d - 1) ans = min(ans, cntdistinct);
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