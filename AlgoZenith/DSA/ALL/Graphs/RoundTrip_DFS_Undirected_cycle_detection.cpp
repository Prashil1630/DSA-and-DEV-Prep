#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m;
vector<vector<int>> g;
vector<int> color;
bool isCycle = 0;

// DFS to detect cycle in undirected graph
void dfs(int node, int par){
    color[node] = 2;
    for(auto v : g[node]){
        if(v == par) continue;
        if(color[v] == 1){
            // Forward Edge : Neighbour node is not visited
            dfs(v, node);
        } else if( color[v] == 2){
            // Back Edge : Cycle Detected
            isCycle = 1;
        } else if(color[v] == 3){
            // Cross edge : (it won't cause cycle)
            // No use
        }
    }
    color[node] = 3;
}
 
void solve() {
    cin >> n >> m;
    g.resize(n+1);
    map<pair<int, int>, int> edgeCnt;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a == b){
            // Self loop
            continue;
        }
        if(a > b) swap(a, b);
        if(++edgeCnt[make_pair(a, b)] > 1){
            // Multiple Edges
            continue;
        }
        else{
            g[a].push_back(b);
            g[b].push_back(a);
        }
    }
    color.assign(n+1, 1);
    for(int i = 1; i <= n; i++){
        if(color[i] == 1) dfs(i, 0);
    }
    if (isCycle) cout << "YES\n";
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
