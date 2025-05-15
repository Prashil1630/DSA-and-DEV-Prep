#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9+7;

int mod_exponentiation(int base, int exp, int mod) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) 
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int neg=0, pos=0, zero=0;
    for (int i=0; i<n;i++) {
        cin >> a[i];
        if (a[i]<0) neg++;
        else if (a[i]>0) pos++;
        else zero++;
    }
    
    if (neg + pos == 0) {
        cout << 0 << "\n";
        return;
    }
    
    int ans = mod_exponentiation(2, neg + pos, MOD);
    if (neg == 0) ans = (ans - 1 + MOD) % MOD;
    ans = (ans * mod_exponentiation(2, zero, MOD)) % MOD;
    cout<<ans<<"\n";
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
