#include <bits/stdc++.h>
using namespace std;
#define int long long

int countparenthesis(string s) {
    int opening = 0;
    int closeing = 0;
    for (char c : s) {
        if (c == '(') {
            opening++;
        } else if (c == ')') {
            if (opening > 0) {
                opening--;
            } else {
                closeing++;
            }
        }
    }
    return opening + closeing;

    // stack<char> st;
    // for (char c : s) {
    //     if (c == '(') st.push(c);
    //     else if (c == ')') {
    //         if (!st.empty() && st.top() == '(') st.pop();
    //         else st.push(c);
    //     }
    // }
    // return st.size();
}

void solve() {
    string s;
    cin >> s;
    cout << countparenthesis(s) << "\n";
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