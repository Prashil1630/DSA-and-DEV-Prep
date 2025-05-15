#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,result=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        result=result^x;
    }
    cout<<result<<endl;

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