#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve() {
    int n;
    cin >> n;
    int wins[n], draws[n], scored[n], conceded[n];

    for (int i = 0; i < n; i++) cin >> wins[i];
    for (int i = 0; i < n; i++) cin >> draws[i];
    for (int i = 0; i < n; i++) cin >> scored[i];
    for (int i = 0; i < n; i++) cin >> conceded[i];

    int first = 0, second = 1;

    for (int i = 0; i < n; i++) {
        int points = 3 * wins[i] + draws[i];
        int goaldiff = scored[i] - conceded[i];

        if (points > 3 * wins[first] + draws[first] ||
            (points == 3 * wins[first] + draws[first] && goaldiff > scored[first] - conceded[first]) ||
            (points == 3 * wins[first] + draws[first] && goaldiff == scored[first] - conceded[first] && i < first)) {
            second = first;
            first = i;
        }
        else if (i != first && (points > 3 * wins[second] + draws[second] ||
            (points == 3 * wins[second] + draws[second] && goaldiff > scored[second] - conceded[second]) ||
            (points == 3 * wins[second] + draws[second] && goaldiff == scored[second] - conceded[second] && i < second))) {
            second = i;
        }
    }

    cout << first << " " << second << "\n";
}

signed main() {
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