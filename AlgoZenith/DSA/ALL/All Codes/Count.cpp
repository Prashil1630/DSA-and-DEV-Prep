#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>>s;
    int sum = 0;
    for(char c:s) sum+=c-'0';
    cout<<sum<<endl;
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