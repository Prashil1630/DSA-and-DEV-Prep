#include <bits/stdc++.h>
using namespace std;
// #define int long long
using state = pair<int, int>;
int n, m;
vector<vector<int>> arr, visited;

// down, left, up, right
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool isInside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

vector<state> neighbours(state curr) {
    vector<state> ans;
    for(int dir = 0; dir < 4; dir++) {
        int nx = curr.first + dx[dir];
        int ny = curr.second + dy[dir];
        if(isInside(nx, ny) && arr[nx][ny] == 0 && !visited[nx][ny]) {
            ans.push_back({nx, ny});
        }
    }
    return ans;
}

vector<state> bfs(state st){
    vector<state> cells;
    queue<state> q;
    q.push(st);
    visited[st.first][st.second] = 1;
    cells.push_back({st.first, st.second});

    while(!q.empty()){
        state curr = q.front();
        q.pop();
        for (auto v : neighbours(curr)){
            if (!visited[v.first][v.second]) {
                visited[v.first][v.second] = 1;
                q.push(v);
                cells.push_back(v);
            }
        }   
    }
    return cells;
}

void solve() {
    cin >> n >> m;
    arr = vector<vector<int>>(n + 1, vector<int>(m + 1));
    visited = vector<vector<int>>(n + 1, vector<int>(m + 1, 0));
    state st;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> arr[i][j];

    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(arr[i][j] == 0 && !visited[i][j]){
                st = {i,j};
                vector<state> component = bfs(st);
                if(component.size() > 1){
                    for(auto [x, y] : component){
                        arr[x][y] = component.size();
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
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