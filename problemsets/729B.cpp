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
	int n,m; cin>> n >> m;
	vector<vector<int>> stage(n+1, vector<int>(m+1,0));
	vector<vector<int>> ver(n+1, vector<int>(m+1,0)), hoz(n+1, vector<int>(m+1,0));

	for(int i =1;i<=n;i++){
		for(int j =1;j<=m;j++){
			cin >> stage[i][j];
			ver[i][j] = ver[i][j-1] + stage[i][j];
			hoz[i][j] = hoz[i-1][j] + stage[i][j];
		}
	}
	int count =0;
	for(int i =1;i<=n;i++){
		for(int j =1;j<=m;j++){
			if(stage[i][j]==0){
				if(ver[i][m] -  ver[i][j]>=1) count ++;
				if(ver[i][j] - ver[i][0]>=1) count++;
				if(hoz[i][j] - hoz[0][j]>=1) count++;
				if(hoz[n][j] - hoz[i][j]>=1) count++; 
			}
		}
	}
	cout<< count << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
