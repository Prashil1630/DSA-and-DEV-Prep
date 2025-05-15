#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 1 || n == 0) {
        cout << "1\n";
        return;
    }

    long long f = 1; 
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    cout << f << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
