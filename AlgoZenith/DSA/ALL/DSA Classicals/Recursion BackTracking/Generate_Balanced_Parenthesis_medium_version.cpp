#include <bits/stdc++.h>
using namespace std;
#define int long long

int n, k;
int count = 0, opening = 0;
bool flag = true;
void rec(int level){
    if(level == n){
        if(flag || k == level){

        }
    }
}

int brackets = 0;

void rec(int n, int count, string s, int openBrackets){
    
    if(n==0){
        if(openBrackets == count){   
            cout<<s<<"\n";
            return;
        }
    }

    if(openBrackets < brackets/2){
        rec(n-1, count+1, s+"(", openBrackets+1);
    }

    if(count > 0){
        rec(n-1, count-1, s+")", openBrackets);
    }
}

void solve() {
    cin >> n >> k;
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