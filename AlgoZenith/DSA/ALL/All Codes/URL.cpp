#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int n=size(s),index=s.find('?');
    for(int i=index+1;i<n;i++){
        if(s[i]!='=' && s[i]!='&'){
            cout<<s[i];
        }
        else if(s[i]=='=') cout<<": ";
        else if(s[i]=='&') cout<<"\n";
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