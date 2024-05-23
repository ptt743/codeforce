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
	vector<bool> visited(n+1, false);
	vector<int> ans(n+1,0);
	for(int i =1;i<=n;i++){
		if(!visited[i]){
			visited[i] = true;
			int u = p[i];
			vector<int> temp;
			temp.push_back(i);
			while(u!=i){
				temp.push_back(u);
				visited[u] = true;
				u = p[u];
			}
			for(int item : temp){
				ans[item] = temp.size();
			}
		}
	}
	for(int i =1;i<=n;i++) cout<< ans[i]<<" ";
	cout<< endl;
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
