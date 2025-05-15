#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    set<int> a,b,u,i,d;
    int x;
    for (int i = 0; i < n; i++) {
        cin>>x;
        a.insert(x);
        u.insert(x);
    }
    for (int i = 0; i < m; i++) {
        cin>>x;
        b.insert(x);
        u.insert(x);
    }
    set_intersection(a.begin(),a.end(),b.begin(),b.end(),inserter(i, i.begin()));
    set_difference(a.begin(),a.end(),i.begin(),i.end(),inserter(d,d.begin()));
    if (u.size() != 0) {for(auto x: u) cout<<x<<" ";}
    cout<<"\n";
    if (i.size() != 0) {for(auto x: i) cout<<x<<" ";}
    cout<<"\n";
    if (d.size() != 0) {for(auto x: d) cout<<x<<" ";}
    cout<<"\n";
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