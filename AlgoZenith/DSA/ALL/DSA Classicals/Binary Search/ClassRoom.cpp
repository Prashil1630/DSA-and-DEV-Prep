#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int a[], int n, int k, int d){
    int placedstd = 1;
    int lastpos = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] - lastpos >= d){
            placedstd++;
            lastpos = a[i];
        }
    }
    return placedstd >= k;

}

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n], mini = INT_MAX;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i=0; i < n; i++){
        mini = min(mini, a[i] - a[i-1]);
    }
    int lo = mini, hi = a[n-1] - a[0];
    int ans = -1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if(check(a, n, k, mid)){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        } 
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