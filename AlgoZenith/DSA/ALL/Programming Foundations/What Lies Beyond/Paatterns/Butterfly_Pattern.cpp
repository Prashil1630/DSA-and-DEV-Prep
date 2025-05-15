#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=2*n-1;j++){
            if(i>=j || j>=2*n-i) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    for (int i=1;i<n;i++){
        for (int j=1;j<=2*n-1;j++){
            if(n-i>=j || j>=n+i) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
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

/*
n=3

  01234
0 *   *
1 ** **
2 *****
0 ** **
1 *   *

*/