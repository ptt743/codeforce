#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<functional>
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
int cal(string s){
	int sum =0;
	for(int i =0;i< s.size();i++){
		if(s[i]=='A') sum+= 4;
		if(s[i]=='B') sum +=2;
		if(s[i] =='C') sum +=1;
	}
	return sum;
}

void solve(){
	int n;
	cin>> n;
	vector<pair<int, int>> in(n+1);
	for(int i =1;i<=n;i++){
		int p; string v;
		cin>> p >> v;
		in[i] = make_pair(p,cal(v));
	}
	vector<vector<int>> dp(n+1, vector<int>(8,1e9));
	dp[1][in[1].second] = in[1].first;
	for(int i =2;i<=n;i++){
		dp[i][in[i].second] = in[i].first;
		for(int j =1;j<=7;j++){
			for( int k = 1;k<=7;k++){
				if( ((in[i].second | k) == j)){
					dp[i][j] = min(dp[i][j], dp[i-1][k] + in[i].first);
				}	
			}
			if(i>=1)dp[i][j] = min(dp[i][j], dp[i-1][j]);
		}
	}
	if(dp[n][7]==1e9){ cout<< "-1"<<endl; return;}
	cout<< dp[n][7]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
