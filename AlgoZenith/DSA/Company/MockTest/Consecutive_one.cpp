#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, k;
    cin >> n>> k;
    int arr[n];
    for (int i = 0; i< n; i++) cin >>arr[i];
    int head = -1, tail = 0;
    int ans = 0;
    int cntzero = 0;
    while(tail < n){
        while((head+1) < n && (arr[head+1] == 1 || cntzero < k )){
            head++;
            if (arr[head] == 0) cntzero++;
        }
        ans = max(ans, head - tail + 1);
        if(tail >= head){
            tail++;
            head = tail -1;
        }
        else {
            if(arr[tail] == 0) cntzero--;
            tail++;
        }
    }
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