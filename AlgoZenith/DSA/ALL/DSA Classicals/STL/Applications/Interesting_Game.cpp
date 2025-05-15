#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair <int, int> a, pair <int, int> b) {
    return a.first+a.second > b.first+b.second;
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first;
    for (int i = 0; i < n; i++) cin >> a[i].second;
    sort(a.begin(), a.end(), comp);
    // for (auto i : a) cout << i.first << " " << i.second << "\n";
    int a_score = 0, b_score = 0;
    char turn = 'a';
    for (int i = 0; i < n; i++) {
        if (turn == 'a') {
            a_score += a[i].first;
            turn = 'b';
        }
        else {
            b_score += a[i].second;
            turn = 'a';
        }
    }
    if(a_score > b_score) cout << "Alice\n";
    else if(a_score < b_score) cout << "Bob\n";
    else cout << "Tie\n";
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