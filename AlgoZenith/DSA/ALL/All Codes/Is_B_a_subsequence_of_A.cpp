#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,i=0,j=0;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    while(i<n && j<m){
        if(a[i]==b[j]){
            i++;j++;
        }
        else i++;
    }
    if(j==m)cout<<"YES\n";
    else cout<<"NO\n";
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