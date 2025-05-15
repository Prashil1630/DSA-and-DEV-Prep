#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int ans =1;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    cout<<ans-1<<"\n";
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