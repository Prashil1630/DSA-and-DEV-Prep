#include <bits/stdc++.h>
using namespace std;
#define int long long

struct dashboard {
    int total = 0;
    map<int, int> mp;

    void add(int x){
        total += x;
        mp[x]++;
    }
    void remove(int x){
        if (mp.find(x) != mp.end() && mp[x] > 0){
            total -= x;
            mp[x]--;
            if(mp[x] == 0) mp.erase(x);
        }
    }

    int getmin (){
        if(mp.empty()) return -1;
        return mp.begin()->first;
    }

    int getmax (){
        if(mp.empty()) return -1;
        return mp.rbegin()->first;
    }

    int getsum (){
        return total;
    }
};

void solve() {
    dashboard db;
    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;
        if(t == 1){
            int x;
            cin >> x;
            db.add(x);
        }
        else if(t == 2){
            int x;
            cin >> x;
            db.remove(x);
        }
        else if(t == 3){
            char y;
            cin >> y;
            cout << db.getmin() << "\n";
        }
        else if(t == 4){
            char y;
            cin >> y;
            cout << db.getmax() << "\n";    
        }
        else if(t == 5){
            char y;
            cin >> y;
            cout << db.getsum() << "\n";
        }
    }
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