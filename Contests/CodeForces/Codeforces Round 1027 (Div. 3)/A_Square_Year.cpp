#include <iostream>
#include <string>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int val = stoi(s);
    bool found = false;

    for (int x = 0; x < 100; ++x) { 
        if (x * x == val) {
            for (int a = 0; a <= x; ++a) {
                int b = x - a;
                if (a >= 0 && b >= 0) {
                    cout << a << " " << b << endl;
                    found = true;
                    break;
                }
            }
            if (found) break;
        }
    }

    if (!found) {
        cout << -1 << endl;
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
