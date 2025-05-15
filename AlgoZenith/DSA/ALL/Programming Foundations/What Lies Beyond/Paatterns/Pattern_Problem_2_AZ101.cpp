#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,p;
    cin>>n>>m>>p;
    for(int i=0;i<(p+1)*n+1;i++){
        for(int j=0;j<(p+1)*m+1;j++){
            if(i%(p+1)==0 || j%(p+1)==0) cout<<"*";
            else if(((i+j)%((p+1)*2))==0) cout<<"/";
            else if(((i-j+((p+1)*2))%((p+1)*2))==0) cout<<"\\";
            else cout<<".";
        }
        cout<<"\n";
    }
    cout<<"\n";    
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

// *\..*../*\..*../*
// *.\.*./.*.\.*./.*
// *..\*/..*..\*/..*