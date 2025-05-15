#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,score=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='Y'){
            s.push_back(s[i+1]);
            s.erase(i+1);
        }
    }
    cout<<s<<endl;
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