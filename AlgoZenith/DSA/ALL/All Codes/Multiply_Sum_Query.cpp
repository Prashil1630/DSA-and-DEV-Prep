#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod = 1e9+7;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1, 0);
    vector<int> prefix(n + 1, 0);         // store prefix sum of the array
    vector<int> weightedPrefix(n + 1, 0); // store prefix sum of weighted values
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i]= (a[i] % mod + mod) % mod;
        prefix[i] = (prefix[i - 1] + a[i]) % mod;
        weightedPrefix[i] = (weightedPrefix[i - 1] + a[i] * i % mod) % mod;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        int weightedSum = weightedPrefix[r] - weightedPrefix[l - 1];
        weightedSum = (weightedSum + mod) % mod;

        int prefixSum = prefix[r] - prefix[l - 1];
        prefixSum = (prefixSum + mod) % mod;

        int result = weightedSum - (l - 1) * prefixSum % mod;
        result = (result % mod + mod) % mod;
        cout << result << "\n";
    }
    // for(int i = 1; i < n; i++) mulsum[i] = ((a[i]+i) % mod * (i+1) % mod) % mod + mulsum[i-1];
    // int l, r;
    // while(q--) {
    //     cin >> l >> r;
    //     if (l == 1) {
    //         cout << mulsum[r - 1] << "\n";
    //     } else {
    //         cout << (mulsum[r - 1] - mulsum[l - 2] + mod) % mod << "\n";
    //     }
    // }
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