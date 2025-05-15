#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
        if(!mp.count(name)) cout << "OK\n";
        else cout << name << mp[name] << "\n";
        mp[name]++;
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