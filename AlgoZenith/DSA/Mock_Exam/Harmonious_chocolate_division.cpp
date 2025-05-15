#include <bits/stdc++.h>
using namespace std;

void splitc(int a[], int n) {
    long long total = 0;
    for (int i = 0; i < n; ++i) total += a[i];
    if (total % 2 != 0) {
        cout << -1 << "\n";
        return;
    }
    long long half = total / 2;
    long long run = 0;
    for (int i = 0; i < n; ++i) {
        run += a[i];
        if (run == half) {
            for (int j = 0; j <= i; ++j) {
                cout << a[j];
                if (j < i) cout << " ";
            }
            cout << "\n";
            for (int j = i + 1; j < n; ++j) {
                cout << a[j];
                if (j < n - 1) cout << " ";
            }
            cout << "\n";
            return;
        }
    }    
    cout << -1 << "\n";
}

void solve() {
    int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        splitc(a,n);
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