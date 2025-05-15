#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set <int> s;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "add") {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if (op == "erase") {
            int x;
            cin >> x;
            if(s.find(x) != s.end()) s.erase(x);
        }
        else if (op == "find") {
            int x;
            cin >> x;
            if (s.find(x) != s.end()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (op == "print") {
            for(auto i : s) cout << i << " ";
            cout << "\n";
        }
        else s.clear();
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