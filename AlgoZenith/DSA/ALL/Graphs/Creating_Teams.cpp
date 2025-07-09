#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m;
vector<vector<int>> g;
vector<int> visited;
bool isBipartite = true;

void dfs(int node, int color){
    visited[node] = color;
    for(auto v : g[node]){
        if(!visited[v]){
            dfs(v, 3-color);
        }
        else if(visited[v] == visited[node]){
            isBipartite = false;
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
    visited.assign(n+1, 0);
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            dfs(i, 1);
        }
    }

    if(isBipartite) cout << "YES\n";
    else cout << "NO\n";
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