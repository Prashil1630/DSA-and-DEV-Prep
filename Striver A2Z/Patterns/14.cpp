#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){
        char x = 'A';
        for(int j = 1; j <= i; j++){
            if(j <= i){
                cout << x << ' ';
                x++;
            }
        }
        cout << endl;
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