#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int nge[n]{};
    stack<int> st;

    for(int i = 0; i < n; i++){
        // Pop from stack, till all elements are greater than current element
        while(!st.empty() && arr[st.top()] < arr[i]) {
            nge[st.top()] = i;
            st.pop();
        }

        st.push(i);
    }

    while(!st.empty()){
        nge[st.top()] = n;
        st.pop();
    }

    for(int i = 0; i < n; i++) cout << nge[i] << " ";
    
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int _t = 1;
    // cin >> _t;
    while(_t--) {
        solve();
    }

    return 0;
}