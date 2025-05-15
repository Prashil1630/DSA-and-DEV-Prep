#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int mid, int n){
    return mid == n - 1 || a[mid + 1] < a[mid] ;
}

void solve() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, hi = n - 1;
    int ans = -1; //any value as atleast one 1 is present
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(a, mid, n)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    // cout << ans << "\n";
    int peak = ans;
    while(q--) {
        lo = 0, hi = peak - 1;
        ans = -1;
        int x; cin >> x;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(a[mid] >= x){
                ans = mid;
                hi = mid - 1;
            } 
            else lo = mid + 1;
        }
        if(ans != -1 && a[ans] == x) cout << ans + 1 << " ";
        lo = peak, hi = n - 1;
        ans = -1;
        while(lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if(a[mid] <= x){
                ans = mid;
                hi = mid - 1;
            } 
            else lo = mid + 1;
        }
        if(ans != -1 && a[ans] == x) cout << ans + 1 << " ";
        cout << "\n";
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