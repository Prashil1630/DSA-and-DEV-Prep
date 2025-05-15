#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string m,y,z; cin>>m;
    bool left=true;
    // int y=floor(m)+n,z=ceil(m)+n;
    // cout<<z<<"."<<abs(y)<<"\n";
    for(auto c:m){
        if(left && c!='.') y.push_back(c);
        else if(left && c=='.') left=false;
        else if(!left && c!='.') z.push_back(c);
    }
    cout<<stoi(z)+n<<"."<<stoi(y)+n<<"\n";
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