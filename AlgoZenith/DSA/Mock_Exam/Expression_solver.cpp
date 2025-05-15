#include <bits/stdc++.h>
using namespace std;

int add(char a,char b){
    return (int)a+b;
}

int sub(int a,int b){
    return a-b;
}

void solve() {
    string s;
    cin >> s;
    char a='2',b='3';
    cout<<add(a,b);
    // int n=s.size();
    // if(n==3){
    //     if(s[0]!='X') cout<<s[2];
    //     else if(s[2]!='X') cout<<s[0];
    // }
    // int eqi = s.find('=');
    // int xi = s.find('X');
    // int ans=0;
    // if(xi<eqi && xi==0 && eqi == 1){
    //     for(int i=2;i<n;i++){
    //         if(i%2==1 && s[i]=='+') ans+=add(s[i-1],s[i+1]);
    //         if(i%2==1 && s[i]=='-') ans-=sub(s[i-1],s[i+1]);
    //     }
    //     cout<<ans<<"\n";
    // }

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