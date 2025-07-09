#include <bits/stdc++.h>
using namespace std;


const int INF = 100;
using state = pair<int, int>;
int n, m;
vector<string> arr;
vector<vector<int>> vis, dist;
vector<vector<state>> par;


void printer(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dist[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<par[i][j].first<<","<<par[i][j].second<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

int dx[] = {2, 1, 1, 2, -2, -1, -1, -2};
int dy[] = {1, 2, -2, -1, -1, -2, 2, 1};

bool isInside(int x, int y){
    if(x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != '#') return 1;
    return 0;
}

vector<state> neighbours(state curr){
    vector<state> ans;
    for(int dir = 0; dir < 8; dir++){
        int nx = curr.first + dx[dir];
        int ny = curr.second + dy[dir];
        if(isInside(nx, ny)){
            ans.push_back({nx, ny});
        }
    }
    return ans;
}

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
    dist[st.first][st.second] = 0;
    q.push(st);
    while(!q.empty()){
        state curr = q.front();
        q.pop();

        if(vis[curr.first][curr.second]) continue;
        vis[curr.first][curr.second] = 1;

        for(auto v : neighbours(curr)){
            if(dist[v.first][v.second] > dist[curr.first][curr.second] + 1){
                dist[v.first][v.second] = dist[curr.first][curr.second] + 1;
                par[v.first][v.second] = curr;
                q.push(v);
            }
        }
    }
    printer();
}

void solve() {
    cin >> n >> m;
    arr.resize(n);
    state st, en;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 'S') st = {i, j};
            else if(arr[i][j] == 'E') en = {i, j};
        }
    }
    bfs(st);

    if(vis[en.first][en.second]){
        cout << "Min number of move required to reach end from start = " << dist[en.first][en.second]<< "\n";

        state temp = en;
        vector<state> path;
        while(temp != make_pair(-1, -1)){
            path.push_back(temp);
            temp = par[temp.first][temp.second];
        }
        reverse(path.begin(), path.end());
        for(auto p : path){
            cout << p.first << ", " << p.second << "\n";
        }
    } else{
        cout << "Not possible" << endl;
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