#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    multiset<int> ms;
    for(int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if(op == "add"){
            int x;
            cin >> x;
            ms.insert(x);
        }
        else if(op == "count"){
            int x;
            cin >> x;
            cout << ms.count(x) << endl;
        }
        else if (op == "erase") {
            int x;
            cin >> x;
            auto it = ms.find(x);
            if (it != ms.end()) ms.erase(it);
        } 
        else if (op == "eraseall") {
            int x;
            cin >> x;
            ms.erase(x);  
        } 
        else if(op == "print"){
            for(auto it = ms.begin(); it != ms.end(); it++) {
                cout << *it << " ";
            }
            cout << "\n";
        }
        else if(op == "empty") ms.clear();
        else if(op == "find") {
            int x;
            cin >> x;
            if (ms.find(x) != ms.end()) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}

int main() {
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