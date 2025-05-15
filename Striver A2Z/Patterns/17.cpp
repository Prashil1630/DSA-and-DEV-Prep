#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int space = 0; space < n - i - 1; space++) {
            cout << "  ";
        }
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++ << " "; 
        }
        ch--;
        for (int j = 0; j < i; j++) {
            cout << --ch << " ";
        }
        cout << endl;
    }
}

void solve() {
    int n;
    cin >> n;
    pattern(n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
