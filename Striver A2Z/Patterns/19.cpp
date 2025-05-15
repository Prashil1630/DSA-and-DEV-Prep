#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < 2 * n; i++){
        for(int j = 0; j < 2 * n; j++){
            if(i<n && j < n && j%n <= (n-i-1)%n) cout << "* ";
            else if(i < n && j >= n && j%n >= i) cout << "* ";
            else if(i >= n && j < n && j <= i%n) cout << "* ";
            else if(i >= n && j >= n && j - n >= (2*n - i - 1)) cout << "* ";
            else cout<< "  ";
        }
        cout<<endl;
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

// * * * * * * 
// * *     * * 
// *         * 
// *         * 
// * *     * * 
// * * * * * * 