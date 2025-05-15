#include <bits/stdc++.h>
using namespace std;
// #define int long long
int n, k;
vector<int> kth_permutation;
map<int, int> mp;
int x = 1;

void rec(int level){
    if(level == n){
        if(x == k){
            for(auto i : kth_permutation){
                cout << i << " ";
            }
            cout << "\n";
        }
        x++;
    }
    for(auto v : mp){
        if(v.second != 0){
            mp[v.first]--;
            kth_permutation.push_back(v.first);
            rec(level + 1);
            kth_permutation.pop_back();
            mp[v.first]++;
        }
    }
}

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        mp[i]++;
    }

    rec(0);
    
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