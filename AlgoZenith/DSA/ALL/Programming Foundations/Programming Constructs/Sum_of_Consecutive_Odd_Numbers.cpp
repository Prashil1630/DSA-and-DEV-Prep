#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,sum=0;
        cin>>x>>y;
        if(x==(y-1)) cout<<"0\n";
        else{
            for (int i=min(x,y);i<=max(x,y);i++){
                if(i%2==1) sum+=i;
            }
            cout<<sum<<"\n";
        }
    }

    return 0;
}