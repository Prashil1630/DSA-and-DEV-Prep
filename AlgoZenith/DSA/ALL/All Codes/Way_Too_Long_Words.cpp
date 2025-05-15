#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    if(s.size()>10) cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
    else cout<<s<<"\n";
}

int main() {
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