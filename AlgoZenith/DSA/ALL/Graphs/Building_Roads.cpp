#include <bits/stdc++.h>
using namespace std;
// #define int long long
int n, m;
vector<int> visited;
vector<vector<int>> g;

void bfs(int scNode, int cc){
    queue<int> q;
    visited[scNode] = cc;
    q.push(scNode);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        visited[node] = cc;
        for(auto v : g[node]){
            if(visited[v] == 0){
                visited[v] = cc;
                q.push(v);
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
    int cc = 0;
    for(int i = 1; i <=n; i++){
        if(!visited[i]){
            cc++;
            bfs(i, cc);
        }
    }
    cout << cc-1 << "\n";
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