#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll const mod = 1e9+7;
 
int main() {
	
	ll n;
	cin>>n;
	
	vector<vector<char>> mat(n, vector<char>(n));
	vector<vector<ll>> dp(n, vector<ll>(n,0));
	
	for(ll i=0; i<n; i++){
	    for(ll j=0; j<n; j++)
	    cin>>mat[i][j];
	}
	
	if(mat[0][0] != '*')
	dp[0][0] = 1;
	
	// first row
	for(int i=1; i<n; i++){
	    if(mat[0][i] == '*'){
	        dp[0][i] = 0;
	        continue;
	    }
	    
	    dp[0][i] = dp[0][i-1];
	}
	
	//first col
	for(int i=1; i<n; i++){
	    if(mat[i][0] == '*'){
	        dp[i][0] = 0;
	        continue;
	    }
	    
	    dp[i][0] = dp[i-1][0];
	}
	
	for(ll i=1; i<n; i++){
	    for(ll j=1; j<n; j++){
	        
	        if(mat[i][j] == '*'){
	        dp[i][j] = 0;
	        continue;
	        }
	        
	        dp[i][j] = (dp[i-1][j] + dp[i][j-1])%mod;
	    }
	}
	
	cout<<dp[n-1][n-1];
	
	return 0;
}