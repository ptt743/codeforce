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
const ll mod=1e9+7;
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n ; cin>> n;
	vector<vector<int>> a(2, vector<int>(n));
	vector<vector<int>> adj(n+1,vector<int>());
	for(int i =0;i< 2;i++){
		for(int j =0;j< n;j++) cin>> a[i][j];
	}
	for(int i =0;i< n;i++){
		adj[a[0][i]].push_back(a[1][i]);
		adj[a[1][i]].push_back(a[0][i]);
	}
	vector<bool> visited(n+1, false);
	function<void(int)> dfs=[&](int s)-> void{
		visited[s] = true;
		for(int i =0;i< adj[s].size(); i++){
			if(visited[adj[s][i]]==false){
				dfs(adj[s][i]);
			}
		}
	};
	int ans = 1;
	for(int i =1;i<=n;i++){
		if(!visited[i]){
			ans= ans * (ll)(2) % mod;
			dfs(i);
		}
	}
	cout<< ans<<endl;

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
