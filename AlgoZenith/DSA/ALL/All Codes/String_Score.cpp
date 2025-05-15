#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int score=0;
    for(int i=0;i<n;i++) {
        if(s[i]=='V') score+=5;
        else if(s[i]=='W') score+=2;
        else if(s[i]=='X') {
            if(i+1<n) s.erase(i+1,1);
        } 
        else if(s[i]=='Y') {
            if(i+1<n) {
                char temp=s[i+1];
                s.erase(i+1,1);
                s.push_back(temp);
            }
        } 
        else if(s[i]=='Z') {
            if(i+1<n) {
                if(s[i+1]=='V') {
                    score/=5;
                    s.erase(i + 1, 1);
                } 
                else if(s[i+1]=='W') {
                    score/=2;
                    s.erase(i+1,1);
                }
            }
        }
    }
    cout << score << endl;
}

int main() {
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