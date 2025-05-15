#include <bits/stdc++.h>
using namespace std;
// #define int long long

int queens[10];
int n = 8;
char a[8][8];

bool check(int row, int col){
    if(a[row][col] == '*') return 0;
    for(int prev_row = 0; prev_row < row; prev_row++){
        int prev_col = queens[prev_row];
        if(prev_col == col || abs(prev_row - row) == abs(prev_col - col)) return 0;
    }
    return 1;
}

int rec(int row){
    if(row == n) return 1;
    int ans = 0;
    for(int col = 0; col < n; col++){
        if(check(row, col)){
            queens[row] = col;
            ans += rec(row + 1);
            queens[row] = -1;
        }
    }
    return ans;
}

void solve() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    memset(queens, -1, sizeof(queens));
    cout << rec(0) << "\n";
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