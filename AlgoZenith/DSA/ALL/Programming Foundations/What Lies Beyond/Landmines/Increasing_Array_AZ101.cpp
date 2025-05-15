#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int count =0;
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            count+=a[i-1]-a[i];
            a[i]=a[i-1];
        }
    }
    cout<<count <<"\n";
}

signed main() {
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