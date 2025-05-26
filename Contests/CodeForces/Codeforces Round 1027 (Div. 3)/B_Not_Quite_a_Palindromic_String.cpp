#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int count0 = 0;
    for (char c : s) {
        if (c == '0') {
            count0++;
        }
    }
    int count1 = n - count0;
    int numTotalPairs = n / 2;
    int numBadPairsNeeded = numTotalPairs - k;

    if (count0 < numBadPairsNeeded || count1 < numBadPairsNeeded) {
        cout << "NO\n";
        return;
    }

    int remainingZerosForGood = count0 - numBadPairsNeeded;
    int remainingOnesForGood = count1 - numBadPairsNeeded;

    int possibleGoodPairsFromZeros = remainingZerosForGood / 2;
    int possibleGoodPairsFromOnes = remainingOnesForGood / 2;

    int totalMaxGoodPairsCanForm = possibleGoodPairsFromZeros + possibleGoodPairsFromOnes;

    if (totalMaxGoodPairsCanForm >= k) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
