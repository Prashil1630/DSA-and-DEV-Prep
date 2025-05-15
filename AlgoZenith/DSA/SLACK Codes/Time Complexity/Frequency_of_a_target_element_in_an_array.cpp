#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    int target = 0;
    cin >> target;
    
    int i = 0;
    int ans = 0;
    
    while(i < n) {
        while(i < n && arr[i] != target) i++;
        // Either target is found
        // Or array has ended
        if(i < n){
            ans++;
            i++;
        }
    }
    cout << ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int _t = 1;
    // cin >> _t;
    while(_t--) {
        solve();
    }
    
    return 0;
}
// Time Complexity: O(N)