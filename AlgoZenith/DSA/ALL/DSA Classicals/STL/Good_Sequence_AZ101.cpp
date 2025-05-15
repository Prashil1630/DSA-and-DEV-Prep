#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int ans = 0;
    for (auto i : mp) {
        if(i.second >= i.first) ans += i.second - i.first;
        else ans += i.second;
    }
    cout << ans << endl;
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