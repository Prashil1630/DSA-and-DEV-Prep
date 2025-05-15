#include <bits/stdc++.h>
using namespace std;

bool isvalidIPv4(const string &ip) {
    int dots =0, num = 0, count = 0;
    string s = "";
    
    for(char c : ip) {
        if(c== '.') {
            if(s.empty() || s.size()>3 || stoi(s)>255 || (s.size()>1 && s[0]=='0')) return false;
            dots++;
            s = "";
        } 
        else if(isdigit(c)) s+= c;
        else return false;
    }
    if(s.empty() || s.size() > 3 || stoi(s) > 255 || (s.size() > 1 && s[0] == '0')) return false;
    return dots == 3;
}

bool isvalidIPv6(const string &ip) {
    int colons = 0;
    string s= "";
    for(char c : ip) {
        if(c==':') {
            if(s.empty() || s.size() > 4) return false;
            colons++;
            s ="";
        } 
        else if(isxdigit(c)) s += c;
        else return false;
    }
    if(s.empty() || s.size() > 4) return false;
    return colons == 7;
}

void solve() {
    string s;
    cin >> s;
    if(count(s.begin(), s.end(), '.') == 3 && isvalidIPv4(s)) cout << "IPv4" << "\n";
    else if(count(s.begin(), s.end(), ':') == 7 && isvalidIPv6(s)) cout << "IPv6" << "\n";
    else cout << "Invalid" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}