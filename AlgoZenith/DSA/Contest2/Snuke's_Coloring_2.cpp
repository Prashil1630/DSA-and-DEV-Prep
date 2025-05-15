#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int w, h, n, x, y, a;
    cin >> w >> h >> n;
    int area = w * h;
    for(int i = 0; i<n; i++){
        cin >> x >> y >> a;
        if(a == 1){
            area -= h * x;
        }
        else if(a == 2){
            area -= h* (w-x);
        }
        else if(a == 3){
            area -= w * y;
        }
        else if(a == 4){
            area -= w * (h-y);
        }
    }
    cout << area;
}

signed main() {
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