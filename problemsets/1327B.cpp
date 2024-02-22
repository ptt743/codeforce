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
	vector<bool> visited(n+1,false);
	int v = -1;
	for(int i =1;i<=n;i++){
		int k; cin>> k;
		for(int j =0;j< k;j++){
			int temp; cin>> temp;
			adj[i].push_back(temp);
		}
		bool flag = false;
		for(int j =0;j<adj[i].size(); j++){
			if(!visited[adj[i][j]]){
				visited[adj[i][j]] = true;
				flag = true;
				break;
			}
		}
		if(!flag) v = i;
	}
	if(v==-1) cout<<"OPTIMAL"<<endl;
	else {
		cout<< "IMPROVE"<<endl;
		int u = -1;
		for(int i =1;i<=n;i++) 
			if(!visited[i]){
				u = i;
				break;
			}
		cout<< v <<" "<<u<<endl;
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
