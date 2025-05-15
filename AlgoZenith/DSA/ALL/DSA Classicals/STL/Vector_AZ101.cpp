#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v;
    while (n--) {
        string command;
        int x;
        cin >> command;
        if (command == "add") {
            cin >> x;
            v.push_back(x);
        }
        else if (command == "remove") {
            if (!v.empty()) {
                v.pop_back();
            }
        }
        else if (command == "print") {
            cin >> x;
            if (x >= 0 && x < v.size()) {
                cout << v[x] << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
        else if (command == "clear") {
            v.clear();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
