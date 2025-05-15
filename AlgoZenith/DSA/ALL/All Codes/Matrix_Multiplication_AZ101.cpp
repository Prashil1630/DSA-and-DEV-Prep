#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, p;
    cin>>n>>m>>p;
        vector<vector<int>> a(n,vector<int>(m)), b(m,vector<int>(p)), c(n,vector<int>(p));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++) cin>>b[i][j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                int temp=0;
                for(int k=0;k<m;k++) temp=temp+a[i][k]*b[k][j];
                c[i][j]=temp;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++) cout<<c[i][j]<<" ";
            cout<<endl;
        }
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