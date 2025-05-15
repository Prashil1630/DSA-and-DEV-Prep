#include <bits/stdc++.h>
using namespace std;

void solve() {
    int m, n;
    cin >> m >> n;
    set<int> a;
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(a.count(x)) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

int main() {
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