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
void solve(){
	int n, m;
	cin>> n >> m;
	vector<vector<int>> adj(n+1, vector<int>(n+1,0));
	vector<int> d(n+1);
	for(int i =0;i< m;i++){
		int x,y;
		cin>> x >> y;
		d[x]++;
		d[y]++;
		adj[x][y] = 1;
		adj[y][x] = 1;
	}
	int c = 0;
	int result = 0;
	do{
		vector<int> E(101);
		c=0;
		for(int i=1;i<=n;i++){
			if(d[i]==1){
				c++;
				d[i]--;
				E[c] = i;
			}
		}
		if(c>0)result++;
		for(int i =1;i<=c;i++){
			for(int j =1;j<=n;j++){
				if(adj[E[i]][j]){
					d[j]--;
				}
			}
		}
	}while(c>0);
	cout<< result<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
