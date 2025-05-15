#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,count=1,ans=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
        if(a[i] < a[i-1]) {
            ans = ans + (count * (count+1))/2;
            count = 1;    
        }
        else count++;
    }
    ans = ans + (count * (count+1))/2;
    cout << ans << "\n";}

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