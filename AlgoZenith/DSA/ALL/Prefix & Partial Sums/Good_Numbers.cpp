#include <bits/stdc++.h>
using namespace std;

const int m = 1000001;
vector<int> partialsum(m, 0);
vector<int> good(m, 0);

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; i++) {
        int li, ri;
        cin >> li >> ri;
        partialsum[li] += 1;
        if(ri +1 < m) {
            partialsum[ri + 1] -= 1;
        }
    }
    for (int i = 1; i < m; i++) {
        partialsum[i] += partialsum[i - 1];
    }
    for (int i = 0; i < m; i++) {
        good[i] = good[i - 1];
        if (partialsum[i] >= k) good[i]++;
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        cout << good[r] - good[l - 1] << "\n";
    }
        
    // vector<int> prefixsum(n + 1, 0);
    // for (int i = 0; i < n; i++) {
    //     prefixsum[i + 1] = prefixsum[i] + good[i];
    // }
    // for (int i = 0; i < q; i++) {
    //     int l, r;
    //     cin >> l >> r;
    //     if(r != n) {
    //         cout << prefixsum[r + 1] - prefixsum[l] << endl;
    //     }
    //     else{
    //         cout << prefixsum[r] - prefixsum[l] << endl;
    //     }
    // }
    // int l,r;
    // while(q--){
    //     cin >> l >> r;
    //     int sum = 0;
    //     for(int i = l; i <= r; i++) {
    //         if(partialsum[i] >= k) sum++;
    //     }
    //     cout << sum << "\n";
    // }
}

int main() {
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