#include <bits/stdc++.h>
using namespace std;
#define int long long


bool check(int a[], int n, int k, int mid){
    int count_painter = 0;
    int last_painter_time_left = 0;

    for(int i=0; i<n; i++){
        if(last_painter_time_left >= a[i]) {
            last_painter_time_left -= a[i];
        }
        else{
            count_painter++;
            if(count_painter > k) {
                return false;
            }
            last_painter_time_left = mid;
            if(last_painter_time_left>= a[i]) {
                last_painter_time_left -= a[i];
            }
            else return false;
        }
    }
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int lo = 0, hi = sum, ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(a, n, k, mid) == true) {
            hi = mid - 1;
            ans = mid;
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