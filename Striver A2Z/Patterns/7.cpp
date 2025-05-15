#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
		for(int j = 0; j< n-i-1; j++){
            cout << " ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            cout << "*";
        }
        // for(int j = 0; j< n-i-1; j++){
        //     cout << " ";
        // }
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