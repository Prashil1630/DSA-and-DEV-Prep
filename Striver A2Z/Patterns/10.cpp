#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= 2*n-1; i++){
        int stars = i;
        if(i > n) stars = 2*n - i;
        for(int j = 1; j <= stars; j++){
            cout<<"*";
        }
        cout << "\n";
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