#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k, ans = 0;
    cin >> n >> k;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pq.push(x);
    }
    for (int i = 0; i < k; i++) {
        if (pq.empty()) break;
        int x = pq.top();
        pq.pop();        
        ans += x;        
        int y = x / 2;
        pq.push(y);  
    }
    cout << ans << endl;
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