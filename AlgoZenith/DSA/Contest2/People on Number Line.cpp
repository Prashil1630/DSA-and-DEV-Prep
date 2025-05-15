#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    vector<long long> arr(N);
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    vector<long long> prefix(N), suffix(N);
    prefix[0] = arr[0];
    for (int i = 1; i < N; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    suffix[N-1] = arr[N-1];
    for (int i = N-2; i >= 0; --i) {
        suffix[i] = suffix[i+1] + arr[i];
    }
    int original_partitions = 0;
    for (int i = 0; i < N-1; ++i) {
        if (prefix[i] == suffix[i+1]) {
            original_partitions++;
        }
    }

    // Now, check for each possible k (setting arr[k] to 0)
    unordered_map<long long, int> count_left, count_right;

    // Precompute for all possible i, the left and right parts when k is set to 0
    // The idea is to find, for each k, how many i's satisfy:
    // if i < k: prefix[i] == suffix[i+1] - arr[k]
    // if i >=k: prefix[i] - arr[k] == suffix[i+1]

    // So, for each k, the total partitions are:
    // number of i <k where prefix[i] == (suffix[i+1] - arr[k]) ) + number of i >=k where (prefix[i] - arr[k]) == suffix[i+1]

    // To compute this efficiently, we can use two hash maps:
    // 1. For i <k: the value (prefix[i] - suffix[i+1]) should equal -arr[k] (since prefix[i] = suffix[i+1] - arr[k] => prefix[i] - suffix[i+1} = -arr[k])
    // So, for each k, the count is count_left[-arr[k]]
    // 2. For i >=k: (prefix[i] - arr[k]) = suffix[i+1] => prefix[i] - suffix[i+1] = arr[k]
    // So, the count is count_right[arr[k]]

    // So, preprocessing:
    // count_left: for each i, the value (prefix[i] - suffix[i+1]), for i from 0 to N-2
    vector<long long> left_val(N-1), right_val(N-1);
    for (int i = 0; i < N-1; ++i) {
        left_val[i] = prefix[i] - suffix[i+1];
    }
    // count_right: same as left_val, but for all i
    // So right_val is the same as left_val (since for i >=k, the same value is used)
    right_val = left_val;

    // Now, we need for each k, the number of i <k where left_val[i] == -arr[k], and i >=k where right_val[i] == arr[k]

    // So, we can build a prefix frequency map for left_val and a suffix frequency map for right_val

    vector<unordered_map<long long, int>> prefix_maps(N), suffix_maps(N);
    // prefix_maps[k] will have frequencies of left_val[0..k-1]
    if (N > 1) {
        prefix_maps[0] = unordered_map<long long, int>();
        for (int k = 1; k < N; ++k) {
            prefix_maps[k] = prefix_maps[k-1];
            long val = left_val[k-1];
            prefix_maps[k][val]++;
        }
    }

    // suffix_maps[k] will have frequencies of right_val[k..N-2]
    if (N > 1) {
        suffix_maps[N-1] = unordered_map<long long, int>();
        for (int k = N-2; k >= 0; --k) {
            suffix_maps[k] = suffix_maps[k+1];
            long val = right_val[k];
            suffix_maps[k][val]++;
        }
    }

    int max_partitions = original_partitions;
    for (int k = 0; k < N; ++k) {
        long long target_left = -arr[k];
        long long target_right = arr[k];
        int cnt = 0;
        if (k > 0) {
            auto it = prefix_maps[k].find(target_left);
            if (it != prefix_maps[k].end()) {
                cnt += it->second;
            }
        }
        if (k < N-1) {
            auto it = suffix_maps[k].find(target_right);
            if (it != suffix_maps[k].end()) {
                cnt += it->second;
            }
        }
        if (cnt > max_partitions) {
            max_partitions = cnt;
        }
    }
    cout << max_partitions << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}