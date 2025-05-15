#include <bits/stdc++.h>
using namespace std;
#define int long long

//intialise the data structure for window
int distinct_count = 0;
int freq[1000100]{};

void solve() {
    int n, k; 
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    //intialise head and tail pointers
    int head = -1, tail = 0;
    //initalise ans
    int ans = 0; 
    while (tail < n) {
        while((head + 1) < n && (distinct_count < k || freq[arr[head + 1]] >= 1)) {
            head++;
            //if freq is 1 then distinct count is incremented
            if (freq[arr[head]] == 0) distinct_count++;
            //include element
            freq[arr[head]]++;
        }
        //update the ans var
        int len = head - tail + 1;
        ans += len;

        //update tail
        if(tail > head) {
            tail++;
            head = tail - 1;
        }
        else {
            //update the datastructure after removing tail
            freq[arr[tail]]--;
            if(freq[arr[tail]] == 0) distinct_count--;
            tail++;
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