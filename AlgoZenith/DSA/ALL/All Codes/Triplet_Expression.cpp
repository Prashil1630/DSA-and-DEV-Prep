#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,r;
    cin >> n >> r;
    int a[n];
    int val = INT_MIN;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int k=0; k<n; k++){
        for(int j = 0; j<=k; j++){
            for (int i = 0; i <= j; i++) {
                int new_val = a[i] + a[j]*r + a[k]*r*r;
                val = max(val,new_val);
            }
        }
    }
    cout << val << "\n";
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