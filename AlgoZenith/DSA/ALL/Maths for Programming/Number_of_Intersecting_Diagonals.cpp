#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;

long long modInverse(long long a,long long m) {
    long long result=1;
    long long power=m-2;
    while (power>0) {
        if (power%2==1) {
            result=(result*a)%m;
        }
        a=(a*a)%m;
        power/=2;
    }
    return result;
}

void solve() {
    long long N;
    cin>>N;
    if (N<4) {
        cout<<0<<"\n";
        return;
    }
    long long result=(N%MOD)*((N-1)%MOD)%MOD;
    result=result*((N-2)%MOD)%MOD;
    result=result*((N-3)%MOD)%MOD;
    result=result*modInverse(24,MOD)%MOD;    
    cout<<result<<"\n";
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

/*
n=4 - 1
n=5 - 5
n=6 - 15
n=7 - 35
n=8 - 
*/