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
	int n ;
	cin>> n;
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =0;i< n-1;i++){
		int x,y;
		cin>> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	vector<bool> visited(n+1);
	vector<long long> res(n+1);
	function<int(long long)> dfs = [&](long long s)-> int{
		visited[s] = true;
		long long ans = 0;
		for(int  i =0 ;i< adj[s].size();i++){
			if(!visited[adj[s][i]]){
				ans += dfs(adj[s][i]);
			}
		}
		if(ans==0) ans=1;
		res[s] = ans;
		return ans;
	};
	dfs(1);
	int q;
	cin>> q;
	while(q--){
		int x,y;
		cin>> x >> y;
		cout<< res[x]*res[y]<<endl;	
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
