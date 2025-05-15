#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    sum1= pow(2,n);
    for(int i=1;i<n/2;i++){
        sum1+=pow(2,i);
    }
    for(int i=n/2;i<n;i++) sum2+=pow(2,i);
    cout<<abs(sum1-sum2)<<endl;
}

signed main() {
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