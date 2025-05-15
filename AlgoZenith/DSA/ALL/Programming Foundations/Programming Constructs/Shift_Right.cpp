#include <bits/stdc++.h>
using namespace std;

void solve(int n, int x, vector<int> &a) {
    int mod = x % n;
    if (mod == 0) {
        for (int i = 0; i < n; i++) cout << a[i] << " ";
    } else {
        for (int i = 0; i < n; i++) cout << a[(i - mod + n) % n] << " ";
    }
    cout << endl;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    solve(n, x, a);
    return 0;
}
