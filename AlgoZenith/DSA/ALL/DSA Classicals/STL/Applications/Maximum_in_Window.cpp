#include <bits/stdc++.h>
using namespace std;

struct monotone_deque {
    deque<int> dq;
    void insert(int x) {
        while (!dq.empty() && dq.back() < x) dq.pop_back();
        dq.push_back(x);
    }
    void erase(int x) {
        if (!dq.empty() && dq.front() == x) dq.pop_front();
    }
    int getMax() {
        return dq.front();
    }
};

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    monotone_deque m;
    for (int i = 0; i < n; i++) {
        m.insert(a[i]);
        if (i >= k) m.erase(a[i - k]);
        if (i >= k - 1) cout << m.getMax() << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
