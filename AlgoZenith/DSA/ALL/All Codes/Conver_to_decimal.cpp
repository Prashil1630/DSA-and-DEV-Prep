#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, count1=0;
        cin >> n;
        while (n > 0) {
            count1+=(n & 1);
            n >>= 1;
        }
        cout<<(1<<count1)-1<< "\n";
    } 
    return 0;
}