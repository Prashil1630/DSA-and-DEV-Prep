#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i = 0; i < 2*n-1; i++){
        for(int j = 0; j < 2* n - 1; j++){
            int left = j, top = i;
            int right = (2*n-2) - j, bottom = (2*n-2) - i;
            cout << (n - min(min(top,bottom) , min(left, right)));
        }
        cout<<endl;
    }
}

void solve() {
    int n;
    cin >> n;
    pattern(n);
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