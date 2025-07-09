#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, m;
vector<vector<bool>> grid;
vector<vector<int>> dist, distMonster;
vector<vector<pair<int, int>>> par;
queue<pair<int, int>> monsterq, Aq;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
char dirChar[] = {'D', 'U', 'L', 'R'};

bool isInside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfsFromMonsters() {
    while (!monsterq.empty()) {
        auto [x, y] = monsterq.front();
        monsterq.pop();
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (isInside(nx, ny) && grid[nx][ny] && distMonster[nx][ny] == -1) {
                distMonster[nx][ny] = distMonster[x][y] + 1;
                monsterq.push({nx, ny});
            }
        }
    }
}

string reconstructPath(pair<int, int> end) {
    string path;
    auto [x, y] = end;
    while (par[x][y] != make_pair(x, y)) {
        auto [px, py] = par[x][y];
        for (int d = 0; d < 4; d++) {
            if (x - dx[d] == px && y - dy[d] == py) {
                path += dirChar[d];
                break;
            }
        }
        tie(x, y) = make_pair(px, py);
    }
    reverse(path.begin(), path.end());
    return path;
}

bool bfsFromA(string &pathOut) {
    while (!Aq.empty()) {
        auto [x, y] = Aq.front();
        Aq.pop();

        if (x == 0 || x == n - 1 || y == 0 || y == m - 1) {
            pathOut = reconstructPath({x, y});
            return true;
        }

        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d], ny = y + dy[d];
            if (isInside(nx, ny) && grid[nx][ny] && dist[nx][ny] == -1 &&
                (distMonster[nx][ny] == -1 || dist[x][y] + 1 < distMonster[nx][ny])) {
                dist[nx][ny] = dist[x][y] + 1;
                par[nx][ny] = {x, y};
                Aq.push({nx, ny});
            }
        }
    }
    return false;
}

void solve() {
    cin >> n >> m;
    grid.assign(n, vector<bool>(m, true));
    dist.assign(n, vector<int>(m, -1));
    distMonster.assign(n, vector<int>(m, -1));
    par.assign(n, vector<pair<int, int>>(m, {-1, -1}));
    monsterq = queue<pair<int, int>>();
    Aq = queue<pair<int, int>>();

    pair<int, int> start;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            if (s[j] == '#') grid[i][j] = false;
            else if (s[j] == 'M') {
                distMonster[i][j] = 0;
                monsterq.push({i, j});
            } else if (s[j] == 'A') {
                dist[i][j] = 0;
                Aq.push({i, j});
                par[i][j] = {i, j};
                start = {i, j};
            }
        }
    }

    bfsFromMonsters();

    string path;
    if (bfsFromA(path)) {
        cout << "YES\n" << path.size() << '\n' << path << '\n';
    } else {
        cout << "NO\n";
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