#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;    
    if (n == 0) { 
        cout << "1\n"; 
        return; 
    }
    int last_digit[] = {6, 8, 4, 2}; 
    cout << last_digit[n % 4] << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
    }    
    return 0;
}
