#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	string s,t;
	cin>>s>>t;
	
	int n = s.length();
	int m = t.length();
	
	vector<vector<int>> dp(n+1, vector<int>(m+1, INT_MAX));
	
	//first row -- convert empty string s1 
	//to first i characters of s2
	for(int i=0; i<=m; i++){
	    dp[0][i] = i;
	}
	
	//first row -- convert string s1 of length i 
	//to empty string s2
	for(int i=0; i<=n; i++){
	    dp[i][0] = i;
	}
	
	for(int i=1; i<=n; i++){
	    for(int j=1; j<=m; j++){
	        
	        if(s[i-1] == t[j-1]){
	            dp[i][j] = dp[i-1][j-1];
	        }
	        
	        else{
	            dp[i][j] = 1 + min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
	        }
	    }
	}
	
	cout<<dp[n][m];
	return 0;
}