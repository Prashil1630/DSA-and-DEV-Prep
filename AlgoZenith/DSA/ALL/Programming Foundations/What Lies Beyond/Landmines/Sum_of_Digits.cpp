#include <iostream>
#define int long long
using namespace std;

void solve() {
    string N;
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N.size(); i++){
        sum += N[i] - '0';
    }
    cout << sum << '\n';
}

signed main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL); 

    int _t = 1; 
    cin >> _t; 
    while(_t--) {
        solve();
    }

    return 0;
}