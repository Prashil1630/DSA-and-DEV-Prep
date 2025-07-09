// SSSP : single source shortest path
// From a single node find the distance to all the other nodes in the graph
// Explicit graph is given (eg nodes and edges are given explicitly)

#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m;
vector<vector<int>> g;
vector<int> visited;
vector<int> dist;

void bfs (int scNode){
    queue<int> q;
    visited[scNode] = 1;
    dist[scNode] = 0;
    q.push(scNode);
    while(!q.empty()){
        int node = q.front();
        cout << node << ' ';
        q.pop();

        for(auto v : g[node]){
            if(!visited[v]){
                visited[v] = 1;
                q.push(v);
                dist[v] = dist[node]+1;
            }
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
    dist.assign(n+1, 1e9);
    cout << "\n";
    bfs(1);
    cout << "\n";
    for(int i = 1; i <= n; i++){
        cout << i << ": " << visited[i] << ", " << dist[i] << endl;
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