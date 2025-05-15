#include <bits/stdc++.h>
using namespace std;
#define int long long

int mod = 1e9+7;

int power(int a, int n){
    int res = 1;
    while(n>0){
        if(n & 1){
            res = (res * a) % mod;
        }
        a=(a* a) % mod;
        n = n >> 1;
    }
    return res;
}

void solve() {
    int n;
    cin >> n;
    int vowel = power(5, n);
    int consonant = power(21, n);
    int totalWords = power(26, n);

    int ans = (totalWords - vowel + mod) % mod;
    ans = (ans - consonant + mod) % mod;
    cout << ans << "\n";
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