#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll bin_pow(ll base, ll exp, ll MOD) {
    ll result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) { 
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD; 
        exp /= 2;
    }
    return result;
}

void solve() {
    ll a, b, c, p;
    cin >> a >> b >> c >> p;
    if (b == 0 && c != 0) {
        cout << "1\n";
        return;
    }
    if (a % p == 0 || a == 0) {
        cout << "0\n";
        return;
    }
    ll ans = bin_pow(b, c, p-1);  
    ans = bin_pow(a, ans, p);     
    cout << ans << "\n";
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
