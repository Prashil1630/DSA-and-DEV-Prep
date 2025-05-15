#include<bits/stdc++.h>
#define int long long
using namespace std;

bool checkFirst(int arr[], int n, int mid, int x){
    return arr[mid] == x;
}

bool checkLast(int arr[], int n, int mid, int x){
    return arr[mid] < x;
}

void solve(){
    int n, x; cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+ n);
    pair<int, int> ans = {-1, -1};

    int lo = 0, hi = n - 1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(checkFirst(arr, n , mid, x)){
            ans.first = mid;
            hi = mid - 1;
        }
        else if(checkLast(arr, n, mid, x)) lo = mid + 1;
        else hi = mid - 1;
    }

    lo = 0, hi = n - 1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(checkFirst(arr, n, mid, x)){
            ans.second = mid;
            lo = mid + 1;
        }
        else if(checkLast(arr, n, mid, x)) lo = mid + 1;
        else hi = mid - 1;
    }

    cout << ans.first << " " << ans.second << "\n";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}