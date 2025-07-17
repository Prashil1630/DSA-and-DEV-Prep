#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    string s, t;
    cin >> s >> t;
    vector<int> freq(26, 0);
    for(auto c : s) freq[c - 'a']++;
    for(auto c : t) freq[c - 'a']--;

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0) {
            cout << "N\n";
            return;
        }
    }
    cout << "Y\n";
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