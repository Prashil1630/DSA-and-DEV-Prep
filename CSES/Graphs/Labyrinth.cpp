#include <bits/stdc++.h>
using namespace std;

using state = pair<int, int>;
int n, m;
vector<string> arr;
vector<vector<int>> vis, dist;      // vis for visited cells, dist for distance of each cell from the start
vector<vector<state>> par;          // par will store the parent of each cell to trace the path
const int INF = 1e9;               // large value for unreachable/ blocked cells

/// Movement directions: left right up down
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

/// to check whether x and lie within the valid range and check if the cell is blocked or not
bool isInside(int x, int y){
    if(x>= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#') return 1;
    return 0;
}

/// check neighbours of the cell according to the move conditions
vector<state> neighbours(state curr){
    vector<state> ans;
    for(int i = 0; i < 4; i++){
        int nx = dx[i] + curr.first;
        int ny = dy[i] + curr.second;
        if(isInside(nx, ny)){
            ans.push_back({nx, ny});
        }
    }
    return ans;
}

/// BFS algorithm to find the shortest path from the start to all reachable cells
void bfs(state st){
    vis = vector<vector<int>>(
        n, vector<int>(
            m, 0
        )
    );

    dist = vector<vector<int>>(
        n, vector<int>(
            m, INF
        )
    );

    par = vector<vector<state>>(
        n, vector<state>(
            m, make_pair(-1, -1)
        )
    );

    queue<state> q;
    dist[st.first][st.second] = 0;          // Starting position has distance 0
    q.push(st);
    while(!q.empty()){
        state curr = q.front();
        q.pop();
        if(vis[curr.first][curr.second]) continue;
        vis[curr.first][curr.second] = 1;
        for(auto v : neighbours(curr)){
            // check if you can relax edge
            if(dist[v.first][v.second] > dist[curr.first][curr.second] + 1){
                dist[v.first][v.second] = dist[curr.first][curr.second] + 1; //update distance
                par[v.first][v.second] = curr;      // set new parent as we got new better one 
                q.push(v);                  // push for further exploration
            }
        }
    }
}

//Give proper directin as we need to reverese it further
char findDir(state temp){
    state prev = par[temp.first][temp.second];
    if (prev.first == temp.first && prev.second == temp.second - 1) return 'R';  // Right
    if (prev.first == temp.first && prev.second == temp.second + 1) return 'L';  // Left
    if (prev.first == temp.first - 1 && prev.second == temp.second) return 'D';  // Down
    if (prev.first == temp.first + 1 && prev.second == temp.second) return 'U';  // Up
    return ' ';
}

/// find the path from end to start and reverse it at the end
string findPath(state en) {
    string path = "";  
    state temp = en;
    while (par[temp.first][temp.second] != make_pair(-1, -1)) {
        path += findDir(temp);  
        temp = par[temp.first][temp.second];  
    }
    reverse(path.begin(), path.end());  
    return path;
}



void solve() {
    cin >> n >> m;
    arr.resize(n);
    state st, en;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 'A') st = {i, j};
            else if(arr[i][j] == 'B') en = {i, j}; 
        }
    }
    bfs(st);
    if(dist[en.first][en.second] != INF){
        cout << "YES\n" << dist[en.first][en.second] << "\n";
        cout << findPath(en) << endl;
    } 
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