#include <bits/stdc++.h>
using namespace std;
#define int long long

int add(int a, int b, int p) {
    return ((a % p) + (b % p)) % p; 
}

int sub(int a, int b, int p){
    return ((a % p) - (b % p) + p) % p;
}

int mul(int a, int b, int p){
    return ((a % p) * (b % p)) % p;
}

int modInverse(int a, int p) {
    int res = 1, x = a, y = p - 2;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        x = (x * x) % p;
        y >>= 1;
    }
    return res;
}

int divide(int a, int b, int p) {
    return mul(a, modInverse(b, p), p);
}

int calculate(int a, int b, char op, int p) {
    if (op == '+') return add(a, b, p);
    if (op == '-') return sub(a, b, p);
    if (op == '*') return mul(a, b, p);
    if (op == '/') return divide(a, b, p);
    return 0;
}

void solve() {
    int a, b, c, p;
    char op1, op2;
    cin >> a >> op1 >> b >> op2 >> c >> p;
    
    int result = 0;
    
    if (op1 == '*' || op1 == '/') {
        int first = calculate(a, b, op1, p);
        result = calculate(first, c, op2, p);
    } 
    else {
        if (op2 == '*' || op2 == '/') {
            int second = calculate(b, c, op2, p);
            result = calculate(a, second, op1, p);
        }
        else {
            int first = calculate(a, b, op1, p);
            result = calculate(first, c, op2, p);
        }
    }

    cout << result << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
