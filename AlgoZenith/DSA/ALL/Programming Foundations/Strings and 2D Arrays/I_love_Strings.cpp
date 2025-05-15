#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<min(s1.size(),s2.size());i++){
        cout<<s1[i]<<s2[i];
    }
    if(s1.size()>s2.size()){
        for(int i=min(s1.size(),s2.size());i<s1.size();i++){
            cout<<s1[i];
        }
    }
    else if(s2.size()>s1.size()){
        for(int i=min(s1.size(),s2.size());i<s2.size();i++){
            cout<<s2[i];
        }
    }
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