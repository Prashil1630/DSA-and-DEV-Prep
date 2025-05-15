#include <bits/stdc++.h>
#define int long long
using namespace std;

struct Dashboard {

    int totalSum = 0;
    map<int, int> mp;

    // O(log(N))
    void insert(int x) {
        totalSum += x;
    }

    // O(log(N))
    void remove(int x){
        totalSum -= x;
        mp[x]--;
        if(mp[x] == 0) mp.erase(x);
    }

    // O(1)
    int getSum(){
        return totalSum;
    }

    // O(1)
    int getMax(){
        if(mp.empty()) return 0;
        return (*mp.rbegin()).first;
    }

    // O(1)
    int getDistinct() {
        return mp.size();
    }
};

void solve() {

    Dashboard ds;

    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            ds.insert(x);
        } else if(type == 2) {
            cout << ds.getSum() << "\n";
        } else if(type == 3){
            cout << ds.getMax() << "\n";
        } else if(type == 4) {
            int x;
            cin >> x;
            ds.remove(x);
        } else if(type == 5){
            cout << ds.getDistinct() << "\n";
        }
    }
    
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