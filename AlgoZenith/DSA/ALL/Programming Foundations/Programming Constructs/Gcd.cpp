#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    int ans =0;
    for (int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    return ans;
}
 
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}