#include <bits/stdc++.h>
using namespace std;
// #define int long long

int n;
map<int, int> mp;
vector <int> curr_permutation;

void permutation(int level){
    if(level == n){
        for(int i = 0; i < n; i++) {
            cout << curr_permutation[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(auto x : mp) {
        if(x.second != 0){
            mp[x.first]++;
            curr_permutation.push_back(x.first);
            permutation(level + 1);
            curr_permutation.pop_back();
            mp[x.first]--;
        }
    }
}


void solve() {
    cin >> n;
    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        mp[x]++;
    }
    permutation(0);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}