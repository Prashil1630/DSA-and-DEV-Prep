#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s,good1="010",good2="101";
    cin>>s;
    if (s.size()<3) {  
        cout<<"Bad\n";
        return;
    }
    bool flag=false;
    for (int i = 0; i<s.size()-2; i++) {
        string c=s.substr(i, 3);
        if (c==good1 || c==good2)
            flag=true; 
    }
    if(flag) cout<<"Good\n";
    else cout<<"Bad\n";
}

int main() {
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