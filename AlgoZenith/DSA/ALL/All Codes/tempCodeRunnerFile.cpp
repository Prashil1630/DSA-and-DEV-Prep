#include <bits/stdc++.h>
using namespace std;
# define int long long

int n;
int open, close;
string s;

void rec(int level){
    if(level == n){
        if(open==close){
            cout<<s<<"\n";
        }
        return;
    }

    open++;
    s.push_back('(');
    rec(level+1);
    open--;
    s.pop_back();

    if(open>close){
        close++;
        s.push_back(')');
        rec(level+1);
        close--;
        s.pop_back();
    }

}

void solve(){
    cin>>n;
    open = 0;
    close = 0;
    s = "";
    rec(0);

}


signed main() {
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