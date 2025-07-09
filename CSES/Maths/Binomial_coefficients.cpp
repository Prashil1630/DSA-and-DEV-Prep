#include <bits/stdc++.h>
using namespace std;

#define int long long
int mod = 1e9+7;
const int MAX = 1e6 + 10;
int fact[MAX], inv_fact[MAX];

/// Fast exponentiation: calculates (a^b) % mod in O(log b)
int binpow(int a, int b){
    int res = 1;
    while(b){
        if(b % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

/// Precompute all factorials and inverse factorials modulo `mod`
void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) 
        fact[i] = (fact[i - 1] * i) % mod;

    // Use Fermat’s Little Theorem to compute inverse of fact[MAX-1]
    inv_fact[MAX - 1] = binpow(fact[MAX - 1], mod - 2);

    // Now compute all inverse factorials in reverse using:
    // inv_fact[i] = inv_fact[i+1] * (i+1) % mod
    for (int i = MAX - 2; i >= 0; i--)
        inv_fact[i] = (inv_fact[i + 1] * (i + 1)) % mod;
}

// int factorial(int x){
//     int ans = 1;
//     for(int i = 2; i <= x; i++){
//         ans = (ans * i) % mod;
//     }
//     return ans;
// }


// // slower due to multiple calls made and not suitable for multiple querries
// int binpow(int a, int b){
//     if(b == 0) return 1;
//     if(b%2 == 1) return (a * binpow(a, b-1)) % mod;
//     else{
//         int x = binpow(a, b/2);
//         return (x*x) % mod;
//     }
// }

/// Fast approach: nCr using precomputed fact and inv_fact arrays
int ncr_fast(int n, int r) {
    if (r < 0 || r > n) return 0;

    // nCr = fact[n] * inv_fact[r] * inv_fact[n - r]
    return fact[n] * inv_fact[r] % mod * inv_fact[n - r] % mod;
}

/// Slower approach: nCr using on-demand inverse via binpow
int ncr_slow(int n, int r) {
    if (r < 0 || r > n) return 0;

    int numerator = fact[n];
    int denominator = (fact[r] * fact[n - r]) % mod;

    // Use Fermat’s Little Theorem to find modular inverse of denominator
    int denominator_inv = binpow(denominator, mod - 2);

    return (numerator * denominator_inv) % mod;
}

void solve() {
    int n, r;
    cin >> n >> r;

    // Approach 1 (Slower): Use binpow to compute inverse on the fly
    // cout << ncr_slow(n, r) << "\n";

    // Approach 2 (Faster): Use precomputed inverse factorials
    cout << ncr_fast(n, r) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    precompute();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}