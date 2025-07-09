#include <iostream>
#include<vector>
using namespace std;
#define ll long long
ll const mod = 1e9 + 7;
 
int main() {
	
	ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
 
	ll n,amount;
	cin>>n>>amount;
	
	vector<ll> coins(n);
 
	for(int i=0; i<n; i++){
	    cin>>coins[i];
	}
 
        vector<ll> dp(amount+1, 0);
 
        dp[0] = 1;
 
        for(int i=0; i<n; i+=1){
            
            for(int j=1; j<=amount; j+=1){
                
                if(coins[i] <= j){
                    dp[j] += dp[j-coins[i]];
                    dp[j] %= mod;
                    }
                }
               
        }
        
        cout<<dp[amount];
    
}