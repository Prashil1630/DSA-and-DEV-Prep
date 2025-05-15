#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count_arr[26]{};
    for(int i = 0; i < n; i++){
        count_arr[(s[i] - 'a')] += 1;
    }
    string sorted;
    for(int i = 0; i < 26; i++){
        sorted.append(count_arr[i],(char(i) + 'a'));
    }
    cout << sorted;
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