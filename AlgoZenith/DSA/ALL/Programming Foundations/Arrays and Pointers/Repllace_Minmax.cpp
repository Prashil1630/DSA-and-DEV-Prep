#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i++) cin >> arr[i];
    int maxi = 0;
    int mini = 0;
    for(int i = 1; i < N; i++){
        if(arr[i] < arr[mini]) mini = i;
        if(arr[i] > arr[maxi]) maxi = i;
    }
    if (mini != maxi) swap(arr[maxi], arr[mini]);
    for(int i = 0; i < N; i++) cout << arr[i] << " ";
    cout << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
