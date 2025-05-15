#include <bits/stdc++.h>
#define int long long
using namespace std;


char arr[101][101];
int n, m;

bool isValid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m && arr[x][y] != 'x';
}

int dx[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, 1, -1, -1};

bool check(char arr[101][101], int n, int m, int i, int j) {

    for(int neigh = 0; neigh < 8; neigh++){
        int i_neigh = dx[neigh] + i;
        int j_neigh = dy[neigh] + j;

        if(isValid(i_neigh, j_neigh)) return false;
    }
    return true;
}


void solve() {
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> arr[i][j];
    }

    int x, y;
    cin >> x >> y;
    x--; y--;

    if(check(arr, n, m, x, y)) cout << "yes\n";
    else cout << "no\n";

    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}