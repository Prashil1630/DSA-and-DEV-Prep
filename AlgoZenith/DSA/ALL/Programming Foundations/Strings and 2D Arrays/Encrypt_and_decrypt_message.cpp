#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q;
    cin>>q;
    string s;
    cin>>s;
    int n=s.size();
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    if(q==1){
        for(int i=0;i<n;i++){
            int index=original.find(s[i]);
            if(index!=string::npos){
                cout<<key[index];
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            int index=key.find(s[i]);
            if(index!=string::npos){
                cout<<original[index];
            }
        }
    }
    cout<<endl;
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
