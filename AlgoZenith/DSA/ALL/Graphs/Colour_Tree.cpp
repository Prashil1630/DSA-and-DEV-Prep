#include <bits/stdc++.h>
using namespace std;
// #define int long long
vector<int> degree;

void solve() {
    int n;
    cin >> n;
    degree.assign(n + 1, 0);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        degree[u]++;
        degree[v]++;
    }

    int max_degree = 0;
    for(auto d : degree){
        max_degree = max(max_degree, d);
    }
    cout << max_degree + 1 << '\n';
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