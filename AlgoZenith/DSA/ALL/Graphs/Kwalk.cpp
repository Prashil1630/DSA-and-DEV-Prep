#include <bits/stdc++.h>
using namespace std;

int n, Sx, Sy, Fx, Fy;
vector<vector<int>> visited, dist;

int dx[] = {2, 1, 1, 2, -2, -1, -1, -2};
int dy[] = {1, 2, -2, -1, -1, -2, 2, 1};

bool isInside(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < n;
}

vector<pair<int, int>> neighbours(int x, int y){
    vector<pair<int, int>> ans;
    for(int dir = 0; dir < 8; dir++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(isInside(nx, ny)){
            ans.push_back({nx, ny});
        }
    }
    return ans;
}

void bfs(){
    visited = vector<vector<int>>(n, vector<int>(n, 0));
    dist = vector<vector<int>>(n, vector<int>(n, 1e9));

    queue<pair<int, int>> q;
    visited[Sx][Sy] = 1;
    dist[Sx][Sy] = 0;
    q.push({Sx, Sy});

    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        for(auto [nx, ny] : neighbours(x, y)){
            if(!visited[nx][ny]){
                visited[nx][ny] = 1;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int KnightWalk()
{
    // Complete the function
    bfs();
    if(dist[Fx][Fy] == 1e9) return -1;
    return dist[Fx][Fy];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--)
    {
        cin >> n >> Sx >> Sy >> Fx >> Fy;
        // convert to 0-based indexing
        Sx--, Sy--, Fx--, Fy--;
        cout << KnightWalk() << "\n";
    }
}
