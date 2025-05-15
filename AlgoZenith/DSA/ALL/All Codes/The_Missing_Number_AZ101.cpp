#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n),b(n-1),c(n-2);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n-1;i++) cin>>b[i];
    for(int i=0;i<n-2;i++) cin>>c[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    int b_missing=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            b_missing=a[i];
            break;
        } 
    }
    if(b_missing==-1) b_missing=a[n-1];
    int c_missing=-1;
    for(int i=0;i<n-2;i++){
        if(a[i]!=c[i]){
            c_missing=b[i];
            break;
        } 
    }
    if(c_missing==-1) c_missing=a[n-2];
    cout<<b_missing<<" "<<c_missing<<endl;
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