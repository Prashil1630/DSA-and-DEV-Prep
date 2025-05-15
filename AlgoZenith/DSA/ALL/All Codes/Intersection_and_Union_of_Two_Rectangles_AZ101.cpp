#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4; 
    int area1=(x2-x1)*(y2-y1);
    int area2=(x4-x3)*(y4-y3);
    int inter_left=max(x1,x3);
    int inter_right=min(x2,x4);
    int inter_bottom=max(y1,y3);
    int inter_top=min(y2,y4);
    int inter_area=0;
    if(inter_left<inter_right && inter_bottom<inter_top){
        inter_area=(inter_right-inter_left)*(inter_top-inter_bottom);
    }
    int union_area=area1+area2-inter_area;
    cout<<inter_area<<" "<<union_area<<"\n";
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