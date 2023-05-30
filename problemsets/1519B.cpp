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
	int n, m, k;
  cin>> n>>m>>k;
  vector<vector<int>> matrix(n+1, vector<int>(n+1, 0));
  for(int i =2;i<=m;i++) matrix[1][i] =matrix[1][i-1]+ 1;
  for(int i =2;i<=n;i++) matrix[i][1]= matrix[i-1][1] + 1;
  for(int i =2;i<=n;i++){
    for( int j =2;j<=m; j++){
      matrix[i][j] = min(matrix[i-1][j]+ j, matrix[i][j-1]+ i);
    }
  }
  if(matrix[n][m]==k) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
