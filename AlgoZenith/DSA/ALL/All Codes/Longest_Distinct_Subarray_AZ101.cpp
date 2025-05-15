#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) cin >> a[i];

    int ans = 0, cntdistinct;
    int head = -1, tail = 0;
    unordered_map <int, int> freq;
     while(tail < n){
        while(head + 1 < n && (freq[a[head+1]] == 0)){
            head++;
            freq[a[head]]++;
        }
        ans = max(ans, (head - tail + 1));
        if(tail > head){
            tail++;
            head = tail - 1;
        }
        else{
            freq[a[tail]]--;
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