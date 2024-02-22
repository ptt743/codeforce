#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,m,k;
	cin>> n>> m >> k;
	vector<vector<int>> a(n+1, vector<int>(m+1));
	for(int i =1;i<=n;i++){
		for(int j =1;j<=m;j++){
			cin>> a[i][j];
		}
	}
	unordered_map<int,int> row, col;
	for(int i =1;i<=n;i++) row[i] = i;
	for(int i =1;i<=m;i++) col[i] = i;

	while(k--){
		char t; int x,y;
		cin>> t >> x >> y;
		if(t=='r'){
			int temp = row[y];
			row[y] = row[x];
			row[x] = temp;
		} else if( t=='c'){
			int temp = col[y];
			col[y] = col[x];
			col[x] = temp;
		} else cout<< a[row[x]][col[y]]<<endl;
	}
	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
