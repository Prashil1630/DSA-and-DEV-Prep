#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1,s2;
    cin>>s1>>s2;
    if(s1>=s2) cout<<s2;
    else cout<<s1;
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