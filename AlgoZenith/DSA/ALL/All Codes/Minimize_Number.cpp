#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int operation_count=0,flag=1;
    while(flag==1){
        for(int i=0;i<n;i++) {
            if(a[i]%2==0){
                a[i]=a[i]/2;

            }
            else {
                flag=0;
                operation_count--;
                break;
            }
        }
        operation_count++;
    }
    cout<<operation_count<<"\n";
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