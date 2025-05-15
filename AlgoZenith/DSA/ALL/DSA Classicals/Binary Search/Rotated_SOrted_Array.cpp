#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int mid, int n){
    return a[mid] < a[0];
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, hi = n - 1;
    int ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if(check(a,mid,n)){
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