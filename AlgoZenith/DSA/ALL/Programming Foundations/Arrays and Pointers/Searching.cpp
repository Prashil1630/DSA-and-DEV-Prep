#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>x;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            index = i;
            break;
        }
    }
    cout << index << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}