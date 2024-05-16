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
	long long n ;
	cin>> n;
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =0;i<n-1;i++){
		int x, y; cin>> x >> y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	int result = 0;
	vector<bool> visited = vector<bool>(n+1, false);
	long long second = 1, first = 0;
	bool check = false;
	function<int(int)> bfs = [&](int s)->int{
		queue<int> qq;
		qq.push(s);
		visited[s] = true;
		vector<int> temp;
		while(!qq.empty()){
			check = !check;
			temp = vector<int>();
			result++;
			while(!qq.empty()){
				int u = qq.front();
				qq.pop();
				for(int i =0;i< adj[u].size();i++){
					if(visited[adj[u][i]]==false){
						temp.push_back(adj[u][i]);
						visited[adj[u][i]] = true;
					}
				}
			}
		if(check) first+= temp.size();
		else second+= temp.size();
		for(int i =0;i< temp.size();i++) qq.push(temp[i]);				
		}
		

		return 0;
	};
	bfs(1);
	cout<< first*second - (n-1)<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
