#include <bits/stdc++.h>
#define int long long
using namespace std;

map<char, int> mp;

bool isBalanced(string s){
    int n = s.size();

    stack<char> st;

    for(auto c: s){
        // Opening bracket
        if(mp[c] > 0) st.push(c);

        // Closing Bracket
        else {
            if(st.empty() || mp[st.top()] + mp[c] != 0) return false;
            st.pop();
        }
    }
    if(st.empty()) return true;
    return false;

}

void solve() {
    mp['('] = +1;
    mp['{'] = +2;
    mp['['] = +3;
    mp[')'] = -1;
    mp['}'] = -2;
    mp[']'] = -3;

    string s;
    cin >> s;

    if(isBalanced(s)) cout << "YES";
    else cout << "NO";

}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}