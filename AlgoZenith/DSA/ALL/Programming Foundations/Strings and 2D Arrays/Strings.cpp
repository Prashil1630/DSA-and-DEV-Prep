#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<"\n";
    cout<<a+b<<'\n';
    swap(a[0],b[0]);
    cout<<a<<' '<<b<<'\n';
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