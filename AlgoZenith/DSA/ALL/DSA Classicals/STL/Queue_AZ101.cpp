#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    queue<int> q;
    while (n--) {
        string op;
        cin >> op;
        if (op == "add") {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (op == "remove") {
            if (!q.empty()) {
                q.pop();
            }
        }
        else if (op == "print") {
            if (!q.empty()) {
                cout << q.front() << '\n';
            }
            else cout << "0\n";
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