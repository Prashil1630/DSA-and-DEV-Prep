#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m;
vector<vector<int>> grid;

void solve() {
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
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