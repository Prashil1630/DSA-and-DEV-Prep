#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0) {
            cout << "NO" << "\n";
            return;
        }

    } 
    if (n == 1) cout << "NO" << "\n";
    else cout << "YES" << "\n";
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