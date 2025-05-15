#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    int cnt = 0;
    for(int i= 0;i<n;i++) {
        int j = upper_bound(a,a+n,x-a[i])-a;
        if(a[i] <= x-a[i]) j--;
        cnt+=j;
    }
    cout << cnt << endl;
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