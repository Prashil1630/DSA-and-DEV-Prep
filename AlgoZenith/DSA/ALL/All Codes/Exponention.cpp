#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9+7;

// int bin_pow(int base , int exp, int MOD){
//     if(exp == 0) return 1;
//     int result = bin_pow(base, exp/2, MOD);
//     result = (result*result)%MOD;
//     if(exp%2) result = (result*base)%MOD;
//     return result;
// }

int bin_pow(int base, int exp) {
    int result = 1;
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
    int a, b;
    cin >> a >> b; 
    cout << bin_pow(a, b) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
