#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int locations[n];
    for(int i = 1; i <= n; i++) cin >> locations[i];

    vector<int> range(n+2, 0);

    for(int i = 1; i <= n; i++){ 
        int pos = i;
        int start = max(1LL, pos - locations[i]);
        int end = min(n*1LL, pos + locations[i]); 

        range[start] = max(end, range[start]);
    }

    int ans = 0, curr = 0, next = 0;
    int i = 1;

    while (curr < n){
        while (i <= n && i <= curr + 1){
            next = max(next, range[i]);
            i++;
        }

        if (next <= curr){
            cout << -1 << endl;
            return;
        } 
        ans++;
        curr = next;
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
