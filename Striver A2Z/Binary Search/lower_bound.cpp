#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int arr[], int n, int mid, int x){
    return arr[mid] >= x;
}

void solve() {
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int lo = 0, hi = n - 1;
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(check(a, n, mid, x)){
            ans = mid;
            hi = mid -1;
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
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}