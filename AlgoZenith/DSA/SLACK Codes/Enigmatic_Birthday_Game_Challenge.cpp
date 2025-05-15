#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 10;
int freq[N];

void solve() {
    int n;
    cin >> n;
    int A[n];
    
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> A[i];
        ans += freq[A[i] + i];
        freq[A[i] + i]++;
    }

    cout << ans << "\n";

    for(int i = 0; i < n; i++) freq[A[i] + i] = 0;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}