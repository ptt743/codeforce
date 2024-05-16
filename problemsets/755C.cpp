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
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =1;i<=n;i++){
		int y; cin>> y;
		adj[y].push_back(i);
		adj[i].push_back(y);
	}
	vector<bool> visited(n+1, false);
	function<int(int)> bfs = [&](int s)-> int{
		queue<int> qq;
		qq.push(s);
		visited[s] = true;
		while(!qq.empty()){
			int top = qq.front(); qq.pop();
			for(int i =0;i< adj[top].size();i++){
				int u = adj[top][i];
				if(visited[u]==false){
					visited[u] = true;
					qq.push(u);
				}
			}
		}
		return 0;
	};
	int result=0;
	for(int i =1;i<=n;i++){
		if(visited[i]==false){
			bfs(i);
			result++;
		}
	}
	cout<< result<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
