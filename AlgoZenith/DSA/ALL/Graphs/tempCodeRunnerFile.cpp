#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m;
vector<vector<int>> g;
vector<int> visited;
map<int, int> compSize;

void dfs(int node, int compNumber){
    visited[node] = compNumber;
    compSize[compNumber]++;
    for(auto v : g[node]){
        if(!visited[v]){
            dfs(v, compNumber);
        }
    }
}

void solve() {
    cin >> n >> m;
    g.resize(n+1);
    visited.assign(n+1, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    int cc = 0;
    for(int i = 1; i <=n; i++){
        if(!visited[i]){
            cc++;
            dfs(i, cc);
        }
    }
    int ans = 1;
    if(compSize.size() == 1){
        cout << 0 << endl;
    }
    else{
        for(auto v : compSize){
            ans *= v.second;
        }
    }
    cout << ans << endl;
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