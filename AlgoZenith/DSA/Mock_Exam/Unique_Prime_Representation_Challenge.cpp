#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for (int i=0;i<n;i++){
        if (n%i==0 && i!=1 && i!=n) return false;
        else return true;
    }
}
void solve() {
    int n;
    cin>>n;
    if(isprime(n)) cout<<n<<"\n";
    if(n%2==0){
        for (int i=0;i<n/2;i++) cout<<"2 ";
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