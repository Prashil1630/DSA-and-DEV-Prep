#include <bits/stdc++.h>
using namespace std;
// #define int long long
int n, m;
vector<string> arr;
vector<vector<int>> visited;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool isInside(int x, int y){
    if(x>=0 && x<n && y>=0 && y<m) return 1;
    else return 0;
}

vector<pair<int,int>> neighbours(int i, int j){
    vector<pair<int,int>> ans;
    for(int dir = 0; dir < 4; dir++){
        int nx = dx[dir] + i;
        int ny = dy[dir] + j;
        if(isInside(nx, ny) && arr[nx][ny] == '.'){
            ans.push_back({nx, ny});
        }
    }
    return ans;
}

void dfs(int i, int j, int compNumber){
    visited[i][j] = compNumber;
    for(auto p : neighbours(i, j)){
        int x = p.first, y = p.second;
        // cout << x << "\t" << y << endl;
        if(!visited[x][y]){
            dfs(x, y, compNumber);
        }
    }
}

void solve() {
    cin >> n >> m;
    int cc = 0;
    visited = vector<vector<int>> (n, vector<int> (m, 0));
   arr.resize(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == '.' && !visited[i][j]){
                cc++;
                dfs(i, j, cc);
            }
        }
    }
    cout << cc << endl;
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

/*
5 8
########
#..#...#
####.#.#
#..#...#
########
*/