#include <bits/stdc++.h>
using namespace std;
#define int long long

string binary_representation(int n) {
    string ans = "";
    uint64_t x = static_cast<uint64_t>(n);
    for (int i=63; i>=0; i--) {
        if (x&(1ull<<i)) ans += '1';
        else ans += '0';
    }
    return ans;
}
int find_msb(int n){
    if (n == 0) return -1;
    for(int i = 63; i >= 0; i--){
        if(n & (1ll << i)) return i;
    }
    return -1;
}

// 1010100 - 1 = 1010011
// 1010100 & 0101100 
int find_lsb(int n){
    if (n == 0) return -1;
    for (int i = 0; i < 64; i++) {
        if(n & (1ll << i)) return i;
    }
    return -1;
}

int pow2(int n) {
    if (n <= 1) return 0;
    return (n & (n-1)) == 0;
}
int biggest_pow2_divisor(int n){
    if (n == 0) return -1;
    return n & -n;
}

int smallest_pow2(int n){
    if (n <= 1) return 2;
    int res = 1;
    while (res < n) res <<= 1;
    return res;
}

void solve() {
    int n;
    cin >> n;
    cout << binary_representation(n) << "\n";
    cout << find_msb(n) << "\n";
    cout << find_lsb(n) << "\n";
    cout << pow2(n) << "\n";
    cout << biggest_pow2_divisor(n) << "\n";
    cout << smallest_pow2(n) << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}