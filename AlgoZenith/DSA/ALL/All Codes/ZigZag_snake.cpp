#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin>>n>>m;
    bool forward=true;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<endl;
        }
        else if (i%2!=0){
            if(forward){
                for(int j=0;j<m;j++){
                    if(j!=m-1) cout<<".";
                    else cout<<"#";
                }
                cout<<endl;
                forward=false;
            }
            else{
                for(int j=0;j<m;j++){
                    if(j!=0) cout<<".";
                    else cout<<"#";
                }
                cout<<endl;
                forward=true;
            }
        }
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