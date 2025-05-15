#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check(int mid, int s){
    int sum = 0, temp = mid;
    while(temp){
        sum = sum + temp % 10;
        temp /= 10;
    }
    return mid - sum >= s;
}

int findNumberSum (int n, int s){
    if(s==0) return n;
    if(n % 10 == n) return 0;
    int lo = 1, hi = n;
    int ans = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if(check(mid, s)){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    return n - ans + 1;
}

void solve() {
    int n, s;
    cin >> n >> s;
    cout << findNumberSum(n, s) << "\n";
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