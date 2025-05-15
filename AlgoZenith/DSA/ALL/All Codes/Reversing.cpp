#include <bits/stdc++.h>
using namespace std;

// void swap

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
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