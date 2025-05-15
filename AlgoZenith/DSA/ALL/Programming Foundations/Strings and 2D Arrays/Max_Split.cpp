#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int l=0,r=0,count=0,idx=0;
    vector<string> result_str;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L')l++;
        else r++;
        if(l==r){
            count++;
            result_str.push_back(s.substr(idx,i-idx+1));
            idx=i+1;
        }
    }
    cout<<count<<"\n";
    for(int i=0;i<result_str.size();i++){
        cout<<result_str[i]<<"\n";
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
