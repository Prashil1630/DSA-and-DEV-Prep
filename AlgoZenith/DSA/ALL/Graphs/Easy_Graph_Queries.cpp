#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n, m, q;
vector<vector<int>> g;
vector<int> visited;
vector<int> compSize;

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
    cin >> n >> m >> q;
    g.resize(n+1);
    visited.assign(n+1, 0);
    compSize.assign(n+1, 0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a != b){
            g[a].push_back(b);
            g[b].push_back(a);
        }
        else{
            g[a].push_back(a);
        }
    }
    int cc = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i]){
            cc++;
            dfs(i, cc);
        }
    }

    while(q--){
        int op, x, y;
        cin >> op;
        if(op == 1){
            cin >> x;
            cout << compSize[visited[x]] << "\n";
        }
        else if(op == 2){
            cin >> x >> y;
            if(visited[x] == visited[y]) cout << "YES\n";
            else cout << "NO\n";
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