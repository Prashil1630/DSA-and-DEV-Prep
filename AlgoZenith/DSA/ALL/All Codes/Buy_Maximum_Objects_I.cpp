#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];
    sort(a,a+n);
    int res = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if(res > m) break;
        else{
            cnt++;
            res+=a[i];
        }
    }
    cout << cnt-1 << endl;
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