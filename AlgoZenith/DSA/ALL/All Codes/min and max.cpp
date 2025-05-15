#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int min_val = min({a, b, c});
    int max_val = max({a, b, c});
    cout << min_val << " " << max_val << endl;
    return 0;
}