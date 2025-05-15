#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    int max_sum = -1e18;
    int left = 0;
    int curr_odd = 0, curr_sum = 0;
    for(int right = 0; right < n; ++right) {
        if(a[right] % 2 != 0) curr_odd++;
        curr_sum += a[right];
        while(curr_odd > k && left <= right) {
            if(a[left] % 2 != 0) curr_odd--;
            curr_sum -= a[left];
            left++;
        }
        if((curr_odd<=k) && (curr_sum<=d) && (curr_sum>max_sum)) max_sum=curr_sum;
    }
    if(max_sum != -1e18) cout << max_sum << "\n";
    else cout << "IMPOSSIBLE\n";
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