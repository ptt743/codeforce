#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,k,r,c;
	cin>> n>> k>> r>> c;
	vector<vector<int>> mt(n+2, vector<int>(n+2,n+1));
	mt[r][c] = 1;
	for( int i =r;i<=n;i++){
		for( int j = c ;j<=n;j++){
			if(i!=r || j!=c){
			if(mt[i-1][j]==k|| mt[i][j-1]==k) mt[i][j] = 1;
			else mt[i][j] = min(mt[i-1][j], mt[i][j-1])+1;
			}
		}
	}
	for( int i =n ; i>=1;i--){
		for( int j =n;j>=1;j--){
			if(i<r || j< c){
			if((mt[i+1][j]==1|| mt[i][j+1]==1)) mt[i][j] = k;
			else mt[i][j] = min(mt[i+1][j], mt[i][j+1])-1;		
			}
		}
	}
	for(int i=1;i<=n;i++){
		for( int j =1;j<=n;j++){
			if(mt[i][j]==1)cout<<"X";
			else cout<<".";
		}
		cout<<endl;
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
