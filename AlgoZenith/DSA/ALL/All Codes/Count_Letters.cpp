#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int a[26]{};
    for(int i=0;i<s.size();i++) a[s[i]-'a']++;
    for(int i=0;i<26;i++){
        if(a[i]) cout<<(char(i+'a'))<<" : "<<a[i]<<"\n";
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