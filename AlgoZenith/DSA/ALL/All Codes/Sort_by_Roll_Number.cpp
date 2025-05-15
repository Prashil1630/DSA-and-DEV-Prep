#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair<string, int> a, pair<string, int> b){
    return a.second<b.second;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<string, int>> a(n);
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        int x;
        cin >> x;
        a[i] = {s, x};
    }
    sort(a.begin(), a.end(), comp);

    for(int i = 0; i < n; i++) cout << a[i].first << " " << a[i].second << "\n";
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