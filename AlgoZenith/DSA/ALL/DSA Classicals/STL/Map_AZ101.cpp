#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    map<string, int> mp;
    while (q--) {
        string op, name;
        cin >> op >> name;
        if (op == "add") {
            int x;
            cin >> x;
            mp[name] = x;
        }
        else if (op == "erase") {
            if(mp.find(name) != mp.end()) mp.erase(name);
        }
        else if (op == "print"){
            if(mp.find(name) != mp.end()) cout << mp[name] << "\n";
            else cout << 0 << "\n";
        }
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