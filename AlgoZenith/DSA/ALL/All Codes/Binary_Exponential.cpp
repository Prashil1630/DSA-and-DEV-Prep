#include <bits/stdc++.h>
using namespace std;
#define int long long
int MOD = 1e9 + 7;

int bin_pow(int base , int exp){
    if(exp == 0) return 1;
    int result = bin_pow(base, exp/2);
    if(exp%2 != 0){
        // result = ((((result * result) % MOD) * base) % MOD) % MOD;
        result *= result % MOD;
        result *= base % MOD;
        result %= MOD;
        return result;
    }
    else{
        // result = ((result  * result) % MOD) % MOD;
        result *= result % MOD;
        result %= MOD;
        return result;
    }
}

int modular_mathematical_inverse( int n, int p ){
    return bin_pow(n, p - 2);
}

void solve() {
    // int base , exp;
    // cin >> base >> exp;
    // cout << bin_pow(base,exp) << endl;
    int a , b;
    cin >> a >> b;
    const int p = 1e9+7;
    int result = a % MOD * modular_mathematical_inverse(b % MOD , p) % MOD;
    cout << result << endl;
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