#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin >> q;
    stack<int> s1,s2;

    while (q--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            s1.push(x);
        }
        else if (op == "pop") {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if (!s2.empty()) {
                cout << s2.top() << "\n";
                s2.pop();
            }
        }
        else if (op == "front") {
            if (s2.empty()) {
                while (!s1.empty()) {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if (!s2.empty()) {
                cout << s2.top() << "\n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
