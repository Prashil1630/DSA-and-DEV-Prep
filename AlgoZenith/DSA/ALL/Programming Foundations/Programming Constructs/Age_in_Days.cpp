#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout<<n/365<<" years\n";
        n%=365;
        cout<<n/30<<" months\n";
        n%=30;
        cout<<n<<" days\n";
    }
    return 0;
}