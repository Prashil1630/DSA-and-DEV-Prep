#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0;i<n;i++) cin>>a[i];
    int min_val=a[0], min_index = 0;
    for (int i = 1;i<n;i++) {
        if (min_val > a[i]) {
            min_index = i;
            min_val = a[i];
        }
    }
    cout<<min_val<<" "<<min_index+1<<endl;
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