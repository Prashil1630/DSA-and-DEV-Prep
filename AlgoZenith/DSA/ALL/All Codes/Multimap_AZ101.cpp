#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int q;
    cin >> q;
    multimap<string, int> mp;
    while (q--) {
        string op, name;
        cin >> op >> name;
        if(op == "add"){
            int x;
            cin >> x;
            mp.insert({name, x});
        }
        else if(op == "erase"){
            auto it = mp.find(name);
            if(it != mp.end()) {
                mp.erase(it);
            }
        }
        else if(op == "eraseall"){
            if (mp.find(name) != mp.end()) mp.erase(name);
        }
        else if (op == "print"){
            auto it = mp.find(name);
            if (it != mp.end()) cout << it->second << "\n";
            else cout << "0\n";
        }
    }
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