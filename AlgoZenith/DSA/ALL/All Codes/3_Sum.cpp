#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n, target;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int ans = LLONG_MAX;
    for (int j = 1; j < n-1; j++){
        int i = 0, k = n - 1;
        while(i<j && k>j){
            int sum = arr[i] + arr[j] + arr[k];
            int diff = abs(sum - target);
            ans = min(ans, diff);
            if(sum == target) {
                ans = 0;
                break;
                // int itemp = i, ktemp = k;
                // while(itemp < j && arr[itemp] == arr[i]) itemp++;
                // while(j < ktemp && arr[ktemp] == arr[k]) ktemp--;
                i++; k--;
            }
            else if(sum < target) i++;
            else k--;
        }
    }
    cout << ans << "\n";    
}

//1 3 3 5 5 7 7 7 8         T = 15

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