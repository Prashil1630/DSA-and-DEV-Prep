#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int cnt = 0, maxDigit = 0;
    while(n){
        int temp = n;
        maxDigit = 0;
        while(temp){
            maxDigit = max(maxDigit, temp%10);
            temp /= 10;
        }
        n -= maxDigit;
        cnt++;
    }
    cout << cnt << "\n";
}

// int solve(int N) {
//     vector<int> dp(N + 1, INT_MAX);
//     dp[0] = 0; // Base case

//     for (int i = 1; i <= N; i++) {
//         int temp = i;
//         while (temp) {
//             int d = temp % 10;
//             if (d > 0 && dp[i - d] != INT_MAX) {
//                 dp[i] = min(dp[i], dp[i - d] + 1);
//             }
//             temp /= 10;
//         }
//     }
//     return dp[N];
// }

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