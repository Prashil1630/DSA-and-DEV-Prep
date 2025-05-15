#include<bits/stdc++.h>
using namespace std;

bool prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0)return false;
    }
    return true;
}

 
int main(){
    int n;
    cin>>n;
    for (int i=2;i<n+1;i++){
        if(prime(i)) cout<<i<<" ";
    }
    return 0;
}