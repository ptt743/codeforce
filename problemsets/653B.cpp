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
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n, q ; cin>> n>> q;
	vector<vector<string>> adj(26, vector<string>());
	for(int i =0;i< q;i++){
		string x; char y;
		cin>> x >> y;
		adj[y-'a'].push_back(x);
	}
	function<int(char,int)> dfs = [&](char s, int count)-> int{
		if(count == n) return 1;
		int res = 0;
		for(string item : adj[s-'a']){
			res +=dfs(item[0], count+1);
		}
		return res;
	};
	int ans = dfs('a',1);
	cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
