#include<bits/stdc++.h>
using namespace std;

const int INF = 100;

using state = pair<int,int>;
#define F first
#define S second

int n,m;
vector<string> arr;

// Knight Move
// int dx[] = {2,1,1,2,-2,-1,-1,-2};
// int dy[] = {1,2,-2,-1,-1,-2,2,1};

// N,S,E,W,NS,NW,SE,SW
// int dx[] = {1,1,1,0,-1,-1,-1,0};
// int dy[] = {1,0,-1,-1,-1,0,1,1};

/*
5 5
LDRUL
URDLD
LLLUD
LDRUL
DRRUL
0 0
4 4
*/

// N,S,E,W,
int dx[] = {1,0,-1,0};
int dy[] = {0,-1,0,1};
char dirsymbol[] = {'D','L','U','R'};


bool is_inside(int x,int y){
    if(x>=0 && x<n && y>=0 && y<m)return 1;
    else return 0;
}

vector<pair<state,int>> neighbours(state cur){
    vector<pair<state,int>> ans;
    for(int dir=0;dir<4;dir++){
        int nx = cur.F + dx[dir];
        int ny = cur.S + dy[dir];
        if(is_inside(nx,ny)){
            if(arr[cur.F][cur.S]==dirsymbol[dir]){
                ans.push_back({{nx,ny},0});
            }else{
                ans.push_back({{nx,ny},1});
            }
        }
    }
    return ans;
}

vector<vector<int>> vis,dist; 
vector<vector<state>> par; 

void printer(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<dist[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<par[i][j].F<<","<<par[i][j].S<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void bfs01(state st){
    vis = vector<vector<int>>(
        n, vector<int>(
            m, 0
        )
    );
    dist = vector<vector<int>>(
        n, vector<int>(
            m, INF
        )
    );
    par = vector<vector<state>>(
        n, vector<state>(
            m, make_pair(-1,-1)
        )
    );
    deque<state> q;

    dist[st.F][st.S] = 0;
    q.push_back(st);

    while(!q.empty()){
        state cur = q.front();
        q.pop_front();
        
        if(vis[cur.F][cur.S])continue;
        vis[cur.F][cur.S] =1;

        for(auto [v,c] : neighbours(cur)){
            // check if you can relax edge
            if( dist[v.F][v.S] > dist[cur.F][cur.S] + c ){
                dist[v.F][v.S] = dist[cur.F][cur.S] + c;
                par[v.F][v.S] = cur;
                if(c==0){
                    q.push_front(v);
                }else{
                    q.push_back(v);
                }
            }
        }   
    }
    printer();
}

void solve(){
    cin>>n>>m;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    state st,en;
    cin>>st.F>>st.S;
    cin>>en.F>>en.S;

    bfs01(st);
    if(vis[en.F][en.S]){
        cout<<dist[en.F][en.S]<<endl;
        
        // Path printing.
        state temp = en;
        vector<state> path;
        while(temp!=make_pair(-1,-1)){
            path.push_back(temp);
            temp = par[temp.F][temp.S];
        }
        reverse(path.begin(),path.end());
        for(auto v:path){
            cout<<v.F<<","<<v.S<<endl;
        }

    }else{  
        cout<<"Not Possible\n";
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