#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int mid, int n, int x){
    return a[mid] == x;
}

//7 8 9 1 2 3 4 5 6

void solve() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int lo = 0, hi = n-1;
    int ans = -1;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if(check(a, mid, n, x)){
            ans = mid;
        }
        
        if(a[lo] <= a[mid]){
            if(a[lo] <= x && x <= a[mid]) hi = mid-1;
            else lo = mid + 1;
        }
        else {
            if(a[mid] <= x && x <= a[hi]) lo = mid + 1;
            else hi = mid - 1; 
        }
    }
    cout << ans << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}