#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    double a[n],sum;
    for (int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<< fixed << setprecision(7)<<sum/n<<"\n";
    return 0;
}