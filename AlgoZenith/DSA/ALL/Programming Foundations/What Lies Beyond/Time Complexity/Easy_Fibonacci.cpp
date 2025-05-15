#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    if (n==1) cout<<"0";
    else{
        int x=0,y=1;
        cout<<x<<" "<<y<<" ";
        for(int i=2;i<n;i++){
            cout<<x+y<<" ";
            int temp = y;
            y = x + y;
            x = temp;
        }
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