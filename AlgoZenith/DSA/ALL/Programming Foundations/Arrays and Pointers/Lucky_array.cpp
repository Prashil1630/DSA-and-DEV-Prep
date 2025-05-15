#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[0]) count++;
    }
    if (count%2 == 1) cout<<"Lucky\n";
    else cout<<"Unlucky\n";
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