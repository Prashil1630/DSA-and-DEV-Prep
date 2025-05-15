#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++) cout<<"  ";
        int value=1;
        for(int j=0;j<=i;j++){
            cout<<value<<"   ";
            value= value * (i-j)/(j+1) ;
        }
        cout<<endl;
    }
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