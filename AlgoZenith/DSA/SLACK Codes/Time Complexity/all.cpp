#include <bits/stdc++.h>
using namespace std;
#define int long long

// Time Complexity: O(N^2)
// void solve() {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < i; j++) {
//             cnt++;
//         }
//     }
//     for(int i = 0; i < 2 * n; i++) cnt++;
//     cout << cnt;
// }

// Time Complexity: O(SQRT(N))
// void solve() {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 0; i * i < n; i++){
//         cnt++;
//     }
//     cout << cnt;
// }

// Time Complexity: O(N)
// void solve() {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 0; i * i < n; i++){
//         for(int j = 0; j < i; j++){
//             cnt++;
//         }
//     }
//     cout << cnt;
// }


// 9:58
// Time Complexity: O(log(N))
// void solve() {
//     int n;
//     cin >> n;
//     int cnt = 0;
//     for(int i = 1; i <= n; i *= 2) {
//         cnt++;
//     }
//     for(int i = 1; i <= n; i *= 3){
//         cnt++;
//     }
//     cout << cnt;
// }

// Time Complexity: O(N*log(N))
// void solve() {
//     int n; cin >> n;
//     int cnt = 0;
//     for(int i = 1; i <= n; i++) {
//         for(int j = 1; j <= n; j *= 2) cnt++;
//     }
//     cnt++;
// }

// Time Complexity: O(N*log(N))
void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i){
            cnt++;
        }
    }
    cout << cnt;
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