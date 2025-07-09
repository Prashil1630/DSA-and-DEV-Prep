#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, m;
vector<vector<bool>> grid;
vector<vector<int>> dist, distMonster;
queue<pair<int, int>> monsterq, Aq;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isInside(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfsFromMonsters() {
    while (!monsterq.empty()) {
        auto [x, y] = monsterq.front();
        monsterq.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (isInside(nx, ny) && grid[nx][ny] && distMonster[nx][ny] == -1) {
                distMonster[nx][ny] = distMonster[x][y] + 1;
                monsterq.push({nx, ny});
            }
        }
    }
}

void bfsFromA() {
    while (!Aq.empty()) {
        auto [x, y] = Aq.front();
        Aq.pop();

        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir], ny = y + dy[dir];
            if (isInside(nx, ny) && grid[nx][ny] && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                Aq.push({nx, ny});
            }
        }
    }
}

pair<int, int> isValidEscape() {
    int finx = -1, finy = -1, findist = 1e9;

    for (int i = 0; i < n; i++) {
        if (grid[i][0] && dist[i][0] != -1 &&
            (dist[i][0] < distMonster[i][0] || distMonster[i][0] == -1)) {
            if (dist[i][0] < findist) {
                finx = i; finy = 0; findist = dist[i][0];
            }
        }
        if (grid[i][m - 1] && dist[i][m - 1] != -1 &&
            (dist[i][m - 1] < distMonster[i][m - 1] || distMonster[i][m - 1] == -1)) {
            if (dist[i][m - 1] < findist) {
                finx = i; finy = m - 1; findist = dist[i][m - 1];
            }
        }
    }

    for (int j = 0; j < m; j++) {
        if (grid[0][j] && dist[0][j] != -1 &&
            (dist[0][j] < distMonster[0][j] || distMonster[0][j] == -1)) {
            if (dist[0][j] < findist) {
                finx = 0; finy = j; findist = dist[0][j];
            }
        }
        if (grid[n - 1][j] && dist[n - 1][j] != -1 &&
            (dist[n - 1][j] < distMonster[n - 1][j] || distMonster[n - 1][j] == -1)) {
            if (dist[n - 1][j] < findist) {
                finx = n - 1; finy = j; findist = dist[n - 1][j];
            }
        }
    }

    return {findist == 1e9 ? -1 : 1, findist};
}

void solve() {
    cin >> n >> m;
    grid.assign(n, vector<bool>(m, true));
    dist.assign(n, vector<int>(m, -1));
    distMonster.assign(n, vector<int>(m, -1));
    monsterq = queue<pair<int, int>>(); // clear queues
    Aq = queue<pair<int, int>>();

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
            }
        }
    }

    bfsFromMonsters();
    bfsFromA();
    auto [escaped, steps] = isValidEscape();

    if (escaped == -1) cout << "NO\n";
    else cout << "YES\n" << steps << '\n';
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