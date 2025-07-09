#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m;
vector<vector<int>> g;
vector<int> color, parent, cycle, countCycle, prefixOrder;
bool isCycle = 0;

// Only valid if there is only one cycle in a graph component
// For each node if we want to calculate the number of cycles that node is in we can use prefix sum kind of thing
void dfs(int node, int par){
    color[node] = 2;
    parent[node] = par;
    for(auto v : g[node]){
        if(color[v] == 1){
            // Forward Edge : Neighbour node is not visited
            dfs(v, node);
        } else if( color[v] == 2){
            // Back Edge : Cycle Detected
            // cout << "Cycle detected at node : " << node << "\n";
            isCycle = 1;
            int temp = node;
            while(temp != v){
                cycle.push_back(temp);
                temp = parent[temp];
            }
            cycle.push_back(temp);
            countCycle[node]++;
            countCycle[parent[v]]--;  
        } else if(color[v] == 3){
            // Cross edge : (it won't cause cycle)
            // No use
        }
    }
    color[node] = 3;
    prefixOrder.push_back(node);
}
 
void solve() {
    cin >> n >> m;
    g.resize(n+1);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }
    color.assign(n+1, 1);
    parent.assign(n+1, 0);
    countCycle.resize(n+1);
    for(int i = 1; i <= n; i++){
        if(color[i] == 1) dfs(i, 0);
    }
    if (isCycle) cout << "Yes\n";
    else cout << "No\n";
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