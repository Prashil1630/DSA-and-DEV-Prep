#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    vector<int> ans;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int max_val = a[i];
            for (int k=i;k<=j;k++) max_val = max(max_val, a[k]);
            ans.push_back(max_val);
        }
    }
    sort(ans.begin(),ans.end());
    for (int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    cout<<endl;
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