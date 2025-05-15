#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int w, h, n;
    cin >> w >> h >> n;

    int left = 0;
    int bottom = 0;
    int right = w;
    int top = h;
    int z = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, a;
        cin >> x >> y >> a;

        if (a == 1) left = max(left, x);
        else if (a == 2) right = min(right, x);
        else if (a == 3) bottom = max(bottom, y);
        else if (a == 4) top = min(top, y);
    }

    int width = max(z, right - left);
    int height = max(z, top - bottom);
    cout << height * width;
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