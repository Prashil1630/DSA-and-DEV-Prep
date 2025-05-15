#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    vector<int> v;
    int i=1;
    while(i<=n) {
        v.push_back(i);
        i++;
    }
    bool flag=true;
    do{
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout << "\n";
    }while(next_permutation(v.begin(),v.end()));
}

int main() {
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