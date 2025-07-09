#include <bits/stdc++.h>
using namespace std;

// #define int long long
int n, m;
vector<vector<int>> g;
vector<int> visited;
vector<int> temp;

void dfs(int node){
    visited[node] = 1;
    temp.push_back(node);
    for(auto v : g[node]){
        if(!visited[v]){
            dfs(v);
        }
    }
}

void solve() {
    cin >> n >> m;
    g.resize(n+1);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        //If undirected graph 
        // g[b].push_back(a);
    }
    visited.assign(n+1, 0);
    dfs(1);

    for(int i = 1; i <= n; i++) cout << i << " " << visited[i] << "\n";
    for(auto v : temp) cout << v << " ";
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