#include<bits/stdc++.h>
using namespace std;
void printer(vector<int> x){
    for(auto v:x){
        cout<<v<<", ";
    }
    cout<<endl;
}


int n,m;
vector<vector<int>> g;

vector<int> vis;
vector<int> comp;
void dfs(int node, int comp_num){
    vis[node]=1;
    comp[node]=comp_num;
    for(auto v:g[node]){
        if(!vis[v]){
            dfs(v,comp_num);
        }
    }
}

void solve(){
    cin>>n>>m;
    g.resize(n+1); // O(N)
    vis.assign(n+1,0); 
    comp.assign(n+1,0);

    for(int i=0;i<m;i++){ //O(M)
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }

    int cc = 1;
    for(int i=1;i<=n;i++){ 
        if(!vis[i]){
            dfs(i,cc);
            cc++;
        }
    }
    printer(comp);

    vector<int> comp_sz(cc,0);
    for(int i=1;i<=n;i++){
        comp_sz[comp[i]]++;
    }

    printer(comp_sz);
    for(int i=1;i<=n;i++){
        cout<<comp_sz[comp[i]]<<endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}