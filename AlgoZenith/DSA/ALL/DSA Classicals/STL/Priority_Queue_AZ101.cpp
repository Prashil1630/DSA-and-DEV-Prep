#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    priority_queue<int> pq;
    while (q--) {
        string op;
        cin >> op;
        if (op == "add") {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (op == "print") {
            if (!pq.empty()) {
                cout << pq.top() << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (op == "remove") {
            if (!pq.empty()) {
                pq.pop();
            }
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