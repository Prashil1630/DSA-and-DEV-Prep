#include <bits/stdc++.h>
using namespace std;

void solve() {
    string data;
    cin >> data;
    
    unordered_map<char, int> freq;
    for (char digit : data) {
        freq[digit]++;
    }
    int security_key = 0;
    for (auto &[digit, count] : freq) {
        if (count > 1) {
            security_key++;
        }
    }
    cout << security_key << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1;
    //cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
