#include <bits/stdc++.h>
#define int long long
using namespace std;

// It will only have numbers and +, -
// No X here

int evaluate(string s){
    int n = s.size();
    int ans = 0;
    int sign = 1;
    int currNum = 0;
    for(int i = 0; i < n; i++) {
        if('0' <= s[i] && s[i] <= '9'){
            currNum *= 10;
            currNum += s[i] - '0';
        } else {
            ans += sign * currNum;
            sign = s[i] == '+' ? 1 : -1;
            currNum = 0;
        }
    }

    ans += sign * currNum;

    return ans;
}

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    string lhs = "", rhs = "";
    bool equalsFound = false;
    for(int i = 0; i < n; i++) {
        if(s[i] == '=') equalsFound = true;
        else if(!equalsFound){
            lhs += s[i];
        } else {
            rhs += s[i];
        }
    }
    bool xInLHS = false;
    for(auto c: lhs){
        if(c == 'X') xInLHS = true;
    }

    if(!xInLHS) swap(lhs, rhs);


    int xSign = 1;

    for(int i = 0; i < lhs.size(); i++){
        if(lhs[i] == 'X') {
            if(i > 0){
                xSign = lhs[i - 1] == '+' ? 1 : -1;
            }
            lhs[i] = '0';
        }
    }

    int lhsVal = evaluate(lhs);
    int rhsVal = evaluate(rhs);

    int ans = xSign * (rhsVal - lhsVal);
    cout << ans << "\n";
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}