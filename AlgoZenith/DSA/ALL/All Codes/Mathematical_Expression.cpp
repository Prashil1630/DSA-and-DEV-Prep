#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a,b,c;
    char op,eq;
    cin>>a>>op>>b>>eq>>c;
    if (eq=='='){
        if (op=='+'){
            if(c == a+b)cout<<"Yes\n";
            else cout<<a+b<<"\n";
        } else if (op=='-'){
            if(c == a-b)cout<<"Yes\n";
            else cout<<a-b<<"\n";
        } else if (op=='*'){
            if(c == a*b)cout<<"Yes\n";
            else cout<<a*b<<"\n";
        } else if (op=='/'){
            if (b!=0 && c == a/b)cout<<"Yes\n";
            else cout<<a/b<<"\n";
        }
    }
    return 0;
}