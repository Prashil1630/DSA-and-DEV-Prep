#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int head = 0, tail = 0; 
    int countsubarr = 0;
    int sum = 0;
    while(head < n){
        sum += a[head];
        while(sum > k && tail <= head){
            sum -= a[tail];
            tail++;
        }
        countsubarr += head - tail + 1;
    }
    cout << countsubarr << endl;
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