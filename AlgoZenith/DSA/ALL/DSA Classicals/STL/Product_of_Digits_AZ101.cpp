#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

void solve() {
    int n;
    cin >> n;
    int ans=1;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans = (ans * 1LL * x) % MOD;
    }
    cout<<ans<<"\n";
}

int main() {
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