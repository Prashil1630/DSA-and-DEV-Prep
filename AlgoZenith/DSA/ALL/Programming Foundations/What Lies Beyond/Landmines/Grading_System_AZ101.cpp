#include <bits/stdc++.h>
using namespace std;

void solve() {
    int midterm,finalterm,makeup;
    cin>>midterm>>finalterm>>makeup;
    int total=midterm+finalterm;
    if(midterm==-1 || finalterm==-1 || total<30) {
        cout<<"F"<<"\n";
    }
    else if(total>=80 ) cout<<"A"<<"\n";
    else if(total<80 && total>=65) cout<<"B"<<"\n";
    else if(makeup>=50 || total<65 && total>=50) cout<<"C"<<"\n";
    else if(total<50 && total>=30) cout<<"D"<<"\n";
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