#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    while(q--){
        int t, x;
        cin >> t >> x;
        if (t == 1) {
            auto it = lower_bound(a.begin(), a.end(), x);
            if(it != a.end()) cout << *it << " ";
            else cout << "-1 "; 
        }
        else if (t == 2) {
            auto it = upper_bound(a.begin(), a.end(), x);
            if(it != a.end()) cout << *it << " ";
            else cout << "-1 "; 
        }
        else if (t == 3) {
            auto it = upper_bound(a.begin(), a.end(), x);
            cout << it - a.begin() << " ";
        }
        else if (t == 4) {
            auto it = lower_bound(a.begin(), a.end(), x);
            cout << it - a.begin() << " ";
            
        }
    }
    cout << "\n";
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