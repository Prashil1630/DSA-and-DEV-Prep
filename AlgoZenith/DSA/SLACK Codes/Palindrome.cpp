#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int freq[26]{};

    for(int i = 0; i < n; i++){
        freq[s[i] - 'a']++;
    }

    string tFirstHalf = "";
    for(int i = 0; i < 26; i++){
        for(int j = 0; j < freq[i] / 2; j++){
            char c = 'a' + i;
            tFirstHalf += c; // Time Complexity? O(1)
        }
    }

    string tSecondHalf = tFirstHalf;
    reverse(tSecondHalf.begin(), tSecondHalf.end());

    for(int i = 0; i < 26; i++){
        if(freq[i] % 2 != 0){
            tFirstHalf += (char)('a' + i);
            break;
        }
    }

    string ans = tFirstHalf + tSecondHalf;
    cout << ans << "\n";


    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}