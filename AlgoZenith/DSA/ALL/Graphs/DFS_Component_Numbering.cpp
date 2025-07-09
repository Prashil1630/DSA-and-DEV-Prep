#include <bits/stdc++.h>
using namespace std;
// #define int long long
int n, m;
vector<vector<int>> g;
vector<int> visited;

void dfs(int node, int compNumber){
    visited[node] = compNumber;
    for(auto v : g[node]){
        if(!visited[v]){
            dfs(v, compNumber);
        }
    }
}

void solve() {
    cin >> n >> m;
    g.resize(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cc = 0;
    visited.assign(n+1, 0);
    for(int i = 1; i <= n; i++){
        if(!visited[i]) {
            cc++;
            dfs(i, cc);
        }
    }

    cout << cc << endl;
    for(int i = 1; i <= n; i++){
        cout << i << " " << visited[i] << endl;
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