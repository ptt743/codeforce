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
	int n; cin>> n;
	vector<int> p(n+1);
	vector<vector<int>> adj(n+1, vector<int>());
	for(int i =2;i<=n;i++){
		cin>> p[i];
		adj[i].push_back(p[i]);
		adj[p[i]].push_back(i);
	}
	string st; cin>> st; st=" "+st;
	vector<bool> visited(n+1, false);
	int count =0;
	function<int(int)> dfs =[&](int s)-> int{
		visited[s] = true;
		int sum =0;
		for(int i =0;i< adj[s].size();i++){
			int u = adj[s][i];
			if(!visited[u]){
				sum += dfs(u);	
			}
		}
		if(st[s]=='W') sum++;
		else sum--;
		if(sum ==0) count++;
		return sum;
	};
	dfs(1);
	cout<<count<<endl;
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
