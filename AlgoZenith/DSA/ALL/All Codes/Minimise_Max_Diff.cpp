#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int n, int k, int d){
    int cnt = 0;
    for(int i = 1; i < n; i++){
        cnt += (a[i] - a[i - 1] -1) / d;
    }
    return cnt <= k;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n], maxi = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        maxi = max(maxi, a[i] - a[i-1]);
    }
    
    int lo = 1, hi = maxi;
    int ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if(check(a, n, k, mid)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    cout << ans << "\n";
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