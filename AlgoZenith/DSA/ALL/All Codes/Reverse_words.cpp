#include <bits/stdc++.h>
using namespace std;

void solve() {
    string S, word;
    getline(cin, S);
    stringstream ss(S);
    while (ss >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }
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