#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n*m+1;j++) cout<<"*";
        cout<<"\n";
        for(int k=0;i<2;k++){
            for(int j=0;j<m;j++) cout<<"*..";
            cout<<"*\n";  
        }
    }
    for(int j=0;j<3*m+1;j++) cout<<"*";
    cout<<"\n";
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