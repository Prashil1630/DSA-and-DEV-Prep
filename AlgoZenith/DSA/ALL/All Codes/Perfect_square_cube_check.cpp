#include<bits/stdc++.h>
using namespace std;

bool isperfectsquare(int n){
    int root=round(sqrt(n));
    return root*root==n;
}

bool isperfectcube(int n){
    int cubeRoot=round(cbrt(n));
    return cubeRoot*cubeRoot*cubeRoot==n;
}

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q,n;
    cin>>q>>n;
    if(q==1){
        if(isperfectsquare(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
    }
    else if(q==2){
        if(isperfectcube(n)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl; 
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