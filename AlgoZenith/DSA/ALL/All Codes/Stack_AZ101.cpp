#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        string op;
        cin>>op;
        if(op=="add"){
            int x;
            cin>>x;
            s.push(x);
        }
        else if(op=="remove"){
            if(!s.empty())s.pop();
        }
        else if(op=="print"){
            if(!s.empty()) cout<<s.top()<<"\n";
            else cout<<"0\n";
        }
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