#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int a[n][n];
    int no = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j || (i%2 == 0 && j%2 == 0) || (i%2 == 1 && j%2 == 1)) {
                a[i][j] = no;
                no++;
            }
            else {
                a[i][j] = 0;
            }
        }
    }

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++) cout << a[i][j] << " ";
    //     cout << "\n";
    // }

    // cout << a[x][y] << "\n";

    
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

/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    int jog = 0;
    bool can_jog = true;

    for (int i = 0; i <= 2 * (n - 1); i++) {
        vector<pair<int, int>> diagonal;
        for (int j = 0; j < n; j++) {
            int k = i - j;
            if (k >= 0 && k < n) diagonal.push_back({j, k});
        }
        if (i % 2 == 1) reverse(diagonal.begin(), diagonal.end());
        for (auto [j, k] : diagonal) {
            if (can_jog) jog++;
            if (j == x && k == y) {
                cout << jog << "\n";
                return;
            }
            can_jog = !can_jog;
        }
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

*/