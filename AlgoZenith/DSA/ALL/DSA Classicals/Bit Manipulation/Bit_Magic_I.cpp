#include <bits/stdc++.h>
using namespace std;
#define int long long

int n = 0;

int setbit(int i){
    return n | (1LL << i);
}

int /*unset*/clearbit(int i){
    return n & ~(1LL << i);
}

bool /*check*/testbit(int i){
    return (n >> i) & 1;
    // return n & (1 << i);
}

int flipbit(int i){
    return n ^ (1LL << i);
}

bool allbit(){
    return n == (1LL << 60) - 1;
}

bool anybit(){
    return n != 0;
}

bool nonebit(){
    return n == 0;
}

int countbit(){
    int ans = 0;
    while(n){
        ans++;
        n &= n - 1;
    }
    return ans;
}


void solve() {
    int q;
    cin >> q;
    while (q--) {
        int op;
        cin >> op;
        int i;
        switch (op) {
            case 1:
                cin >> i;
                cout << testbit(i) << '\n';
                break;
            case 2:
                cin >> i;
                n = setbit(i);
                break;
            case 3:
                cin >> i;
                n = clearbit(i);
                break;
            case 4:
                cin >> i;
                n = flipbit(i);
                break;
            case 5:
                cout << allbit() << '\n';
                break;
            case 6:
                cout << anybit() << '\n';
                break;
            case 7:
                cout << nonebit() << '\n';
                break;
            case 8:
                cout << countbit() << '\n';
                break;
            case 9:
                cout << n << "\n";
                break;
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