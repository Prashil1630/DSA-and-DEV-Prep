#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==n/2 && j==n/2) cout<<"X";
            else{
                if(i==j) cout<<"\\";
                else if(i+j==n-1) cout<<"/";
                else cout<<"*";
            }
        }
        cout<<"\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}