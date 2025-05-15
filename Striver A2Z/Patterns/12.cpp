#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int space = 2 * (n-1);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for(int j = 1; j <= space; j++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        cout << endl;
        space-=2;
    }
}

void solve() {
    int n;
    cin >> n;
    pattern(n);
}

signed main() {
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