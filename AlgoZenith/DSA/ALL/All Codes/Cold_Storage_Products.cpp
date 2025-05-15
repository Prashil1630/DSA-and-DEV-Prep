#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n], count=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<0) count++;
    }
    cout<<count<<"\n";
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