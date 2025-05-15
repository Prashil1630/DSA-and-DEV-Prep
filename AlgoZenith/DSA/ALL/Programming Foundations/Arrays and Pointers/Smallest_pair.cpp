#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = INT_MAX, min_till_now=a[0]-0;
    for(int i=1;i<n;i++) {
        int val=a[i]+i+min_till_now;
        min_till_now=min(min_till_now,a[i]-i);
        ans=min(ans,val);
    }
    cout<<ans<<endl;
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