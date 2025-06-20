/* Classical Knapsack Problem 
Add Ons/Variations :
        1. Print the max value ans the index of items that can be included in the knapsack and its count
        2. 0-INF Knapsack
        3. Max k items can be taken
        4. Sum of the weight of the item taken should be divisible by m
        5. If ith item is taken the i+1 th item cannot be taken

1. Print the max value ans the index of items that can be included in the knapsack and its count
since we are using dp once the dp is calculated or filled then all the recursive call will be of O(1) as the will mostly lie in the pruning, base case, cache check
NOTE : but while generating solution do not directly check on dp instead make a recursive call(good practice as direct dp check may work here but not always)

2. 0-INF Knapsack
For 0-inf knapsack there can be mutiple appraches like 
    a. loop on an item and check for it val and return the max but it is more costly as O(n*w^2) since there can be w transitions more
    b. if the item is taken then call rec with i itself not on i+1 it is more optimal as it has complexity of O(nw)

3. Max k items can be taken
There is one more constraint so pass it and change the dp accordingly
here items_left is passed and while taking an item check whether the items_left > 0 then only take 

4. Sum of the weight of the item taken should be divisible by m
Calculate the sum of items taken by Total weight W - X and use the table for base check :
    a. Valid return 0
    b. Invalid Return -INF

5. If ith item is taken the i+1 th item cannot be taken
If an item is taken then make call for i+2 th item instead of i+1 th item
*/

#include <bits/stdc++.h>
using namespace std;
// #define int long long
int INF = 1e9;
int n, W, k, m;
int w[303], v[303];

int countFunctionCall = 0;
int dp[303][303];
int DP[303][303][303];
vector<int> solution;

// // 0. Basic rec -> O(nw)
// int rec(int i, int x){
//     // pruning
//     // base case
//     if(i == n) return 0;
//     // cache check
//     if(dp[i][x] != -1) return dp[i][x];
//     // transition
//     int ans = rec(i+1, x);
//     if(w[i] <= x) ans = max(ans, v[i] + rec(i+1, x - w[i]));
//     // save and return
//     return dp[i][x] = ans;
// }

// 1. Print the solution -> O(1)
// void generate(int i, int x){
//     // base case
//     if(i == n) return;
//     else{
//         int dontTake = rec(i+1, x);
//         if(w[i] <= x) {
//             // can possibly take
//             int take = v[i] + rec(i+1, x - w[i]);
//             if(dontTake < take){
//                 solution.push_back(i);
//                 generate(i+1, x - w[i]);
//             }
//             else{
//                 generate(i+1, x);
//             }
//         }
//         else{
//             // cant take
//             generate(i+1, x);
//         }
//     }
// }

// // 2.1 0-inf Knapsack problem -> O(n*w^2) = nw(1+w) (not the most optimal way to implement it) 
// // (0-1) -> (0-Infinity) 
// int rec(int i, int x){
//     // pruning
//     // base check
//     if(i == n) return 0;
//     // cache check
//     if(dp[i][x] != -1) return dp[i][x];
//     // transition
//     int ans = 0;
//     // an item can be taken any number of times from 0 to x/w[i] but make sure to update accordingly by multiplying it
//     for(int noOfTimes = 0; noOfTimes < x/w[i]; noOfTimes++){
//         ans = max(ans, noOfTimes * v[i] + rec(i + 1, x - noOfTimes * w[i]));
//     }
//     // save and return
//     return dp[i][x] = ans;
// }

// // 2.2 Better version of 0-inf Knapsak -> O(nw) = #s * (1 + avg #t) = nw(1+2)
// int rec(int i, int x){
//     // pruning
//     // base check
//     if(i == n) return 0;
//     // cache check
//     if(dp[i][x] != -1) return dp[i][x];
//     // transition
//     int ans = rec(i+1, x);
//     if(w[i] <= x) ans = max(ans, v[i] + rec(i, x - w[i]));
//     // save and return
//     return dp[i][x] = ans;
// }

// // 3. Max k items can be taken (one more constraint to be added as max k is a contraint)
// int rec(int i, int x, int itemsLeft){
//     // pruning
//     // base case
//     if(i == n) return 0;
//     // cache check
//     if(DP[i][x][itemsLeft] != -1) return DP[i][x][itemsLeft];
//     // transition
//     int ans = rec(i+1, x, itemsLeft);
//     if(w[i] <= x && itemsLeft > 0) ans = max(ans, v[i] + rec(i+1, x - w[i], itemsLeft-1));
//     // save and return
//     return DP[i][x][itemsLeft] = ans;
// }

// // 4. Sum of items taken should be divisible by m
// int rec(int i, int x, int itemsLeft){
//     // pruning
//     // base case
//     if(i == n) {
//         int sumOfItemsTaken = W - x;
//         if(sumOfItemsTaken % m == 0) return 0;
//         else return -INF;
//     }
//     // cache check
//     if(DP[i][x][itemsLeft] != -1) return DP[i][x][itemsLeft];
//     // transition
//     int ans = rec(i+1, x, itemsLeft);
//     if(w[i] <= x && itemsLeft > 0) ans = max(ans, v[i] + rec(i+1, x - w[i], itemsLeft-1));
//     // save and return
//     return DP[i][x][itemsLeft] = ans;
// }

// 5. If ith item is taken the i+1 th item cannot be taken
int rec(int i, int x){
    // pruning
    // base case
    if(i == n) return 0;
    // cache check
    if(dp[i][x] != -1) return dp[i][x];
    // transition
    int ans = rec(i+1, x);
    if(w[i] <= x) ans = max(ans, v[i] + rec(i+2, x - w[i]));            // Only change if ith item taken then call for i+2 th item
    // save and return
    return dp[i][x] = ans;
}

void solve() {
    cin >> n >> W;
    for(int i = 0; i < n; i++) cin >> w[i];
    for(int i = 0; i < n; i++) cin >> v[i];

    // memset(dp, -1, sizeof(dp));
    // cout << rec(0, W) << endl;
    
    // generate(0, W);
    // cout << "Number of item that can be included in knapsack : " << solution.size() << "\n";
    // for(auto v : solution) cout << v << " ";
    // cout << endl;

    // // 3. Max k items can be taken
    // memset(DP, -1, sizeof(DP));
    // cin >> k;
    // cout << rec(0, W, k) << endl;

    // // 4. Sum of items taken should be divsible by m
    // memset(DP, -1, sizeof(DP));
    // cin >> k >> m;
    // cout << rec(0, W, k) << endl;

    // 5. If ith item is taken the i+1 th item cannot be taken
    memset(dp, -1, sizeof(dp));
    cout << rec(0, W) << endl;
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