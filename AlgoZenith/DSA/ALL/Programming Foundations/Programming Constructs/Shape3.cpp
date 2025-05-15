#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,count=1;
    cin >> n;
    for(int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++) cout << " ";
        for (int j=0;j<2*i+1;j++) cout << "*";
        cout << endl;
	}
    for(int i=n-1;i>=0;i--){
		for (int j=0;j<n-i-1;j++) cout << " ";
        for (int j=0;j<2*i+1;j++) cout << "*";
        cout << endl;
	}
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
