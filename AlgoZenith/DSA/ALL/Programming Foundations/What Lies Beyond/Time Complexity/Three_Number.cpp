#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,s,count=0;
    cin>>k>>s;
    int start = max(0, s - 2 * k);
    int end = min(k, s);
    for (int i=start;i<=end;i++){
        int rem=s-i;
        if (rem>k) count+=(2*k-rem+1);
        else count+=(rem+1);
    }
    cout<<count;
    return 0;
}