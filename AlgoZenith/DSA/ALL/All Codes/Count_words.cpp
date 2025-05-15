#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isalpha(char c){
    return (c>='a' && c<='z') || (c>='A' && c<='Z');
}

void solve() {
    string s;
    getline(cin,s);
    bool inside_word=false;
    int count=0;
    for(auto c:s){
        if(isalpha(c)){
            if(inside_word==false) count++;
            inside_word = true;
        }
        else {
            inside_word=false;
        }
    }
    cout<<count<<"\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// void solve() {
//     string s;
//     getline(cin,s);
//     bool inside_word=false;
//     int count=0;
//     for(auto c:s){
//         if(isalpha(c)){
//             if(inside_word==false){
//                 count++;
//             }
//             inside_word=true;
//         }
//         else{
//             inside_word=false;
//         }
//     }
//     cout<<count<<"\n";
// }