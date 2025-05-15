#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++) cout<<"  ";
        for(int j=0;j<2*i-1;j++) cout<<"* ";
        cout<<endl;
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


/*
i+j=c
i=j+c

i=4, j=12
      * 
    * * * 
  * * * * * 
* * * * * * *

i=7,j=24

            *  
          * * * 
        * * * * * 
      * * * * * * * 
    * * * * * * * * * 
  * * * * * * * * * * * 
* * * * * * * * * * * * *
*/