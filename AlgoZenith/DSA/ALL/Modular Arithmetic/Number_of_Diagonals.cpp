#include <bits/stdc++.h>
using namespace std;
const int MOD=1000000007;

void solve() {
    int n;
    cin>>n;
    if (n<3) {
        cout<<n<<"\n";
        return;
    }
    long long result=(1LL*n*(n-3))/2;
    result%=MOD;
    cout<<result<<"\n";
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