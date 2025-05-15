#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    if(n==1 || n<=0) cout<<"-1\n";
    for(int i=1;i<=n;i++){
        if(i%2==0) cout << i << "\n";
    }
    return 0;
}