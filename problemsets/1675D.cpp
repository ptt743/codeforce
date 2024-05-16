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
	int n ; cin>> n;
	vector<int> p(n+1);
	for(int i =1;i<=n;i++) cin>> p[i];
	int root = 0;
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =1;i<=n;i++){
		if(p[i] == i) {
			root = i;
			continue;
		}
		adj[i].push_back(p[i]);
		adj[p[i]].push_back(i);
	}
	int result = 0;
	vector<pair<int,int>> path(n+1,make_pair(-1,0));
	vector<bool> visited(n+1,false);
	function<void(int)> dfs = [&](int s)-> void{
		visited[s] = true;
		int count =0;
		for(int i =0;i< adj[s].size();i++){
			int u = adj[s][i];
			if(visited[u]==false){
				count++;
				if(count>1){
					path[u] = make_pair(u,0);
					dfs(u);
				}
				else{
					path[s].second = u;
					dfs(u);
				}
			}
		}
	};
	path[root].first = root;
	dfs(root);
	int ans = 0;
	for(int i =1;i<=n;i++) if(path[i].first==i) ans++;
	cout<< ans<<endl;
	for(int i =1;i<=n;i++){
		if(path[i].first==i){
			int temp = i;
			vector<int> result;
			result.push_back(temp);
			while(path[temp].second!=0){
				temp = path[temp].second;
				result.push_back(temp);
			}
			cout<< result.size()<<endl;
			for(int j=0;j< result.size();j++){
				cout<< result[j]<<" ";
			}
			cout<<endl;
		}
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
