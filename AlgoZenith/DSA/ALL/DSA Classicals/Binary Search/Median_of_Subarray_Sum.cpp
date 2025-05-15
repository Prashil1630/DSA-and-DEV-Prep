#include <bits/stdc++.h>
using namespace std;
#define int long long

int check(int a[], int n, int mid){
    int head = -1, tail = 0;
    int cnt = 0, sum = 0, ans =0;
    while(tail < n){
        while(head+1<n && sum+a[head+1] <= mid){
            head++;
            cnt++;
            sum+=a[head];
        }
        ans += cnt;
        if(tail>head){
            tail++;
            head=tail-1;
        }
        else{
            sum-=a[tail];
            cnt--;
            tail++;
        }
    }
    return ans;
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum +=a[i];
    }
    int lo = 0, hi = sum;
    int total = (n * (n + 1)) /2;
    int median = (total+1)/2;
    int ans = 0;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(check(a, n, mid) >= median){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }
    cout << ans << "\n";
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