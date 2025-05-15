#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n,max_count,count;
    cin>>n;
    max_count=count=2;
    vector<int> a(n);
    cin>>a[0]>>a[1];
    for(int i=2;i<n;i++){
        cin>>a[i];
        if((a[i]-a[i-1])==(a[i-1]-a[i-2])){
            count++;
        }
        else{
            max_count=max(count,max_count);
            count=2;
        }
        }
        max_count=max(count,max_count);
        cout<<max_count<<endl;
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