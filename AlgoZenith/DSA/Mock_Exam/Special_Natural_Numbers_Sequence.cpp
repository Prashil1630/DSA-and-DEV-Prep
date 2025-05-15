#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    // for(int i=1;i<=n/2;i++){
    //     cout<<i<<" ";
    //     if(i==1) cout<<n<<" ";
    //     else if(i==n/2) cout<<n+1/2<<" ";
    //     else cout<<n-i<<" ";
    // }
    for(int i=0;i<n/2;i++){
        cout<<i+1<<" ";
        cout<<n-i<<" ";
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