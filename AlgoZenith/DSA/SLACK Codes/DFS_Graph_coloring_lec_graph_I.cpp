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

bool not_possible=0;
    
vector<int> vis;
vector<int> section;

void dfs(int node, int sec){
    vis[node]=1;
    section[node]=sec;
    for(auto v:g[node]){
        if(!vis[v]){
            dfs(v,(1+2)-sec);
        }else if(section[v]==section[node]){
            not_possible = 1;
            return;
        }
    }
}

void solve(){
    cin>>n>>m;
    g.resize(n+1); // O(N)
    vis.assign(n+1,0); 
    section.assign(n+1,0);

    for(int i=0;i<m;i++){ //O(M)
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(int i=1;i<=n;i++){ 
        if(!vis[i]){
            dfs(i,1);
        }
    }
    if(not_possible){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        printer(section);
    }
    

    // vector<int> comp_sz(cc,0);
    // for(int i=1;i<=n;i++){
    //     comp_sz[comp[i]]++;
    // }

    // printer(comp_sz);
    // for(int i=1;i<=n;i++){
    //     cout<<comp_sz[comp[i]]<<endl;
    // }
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