#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n,m,x,y;
  cin>> n>>m>>x>>y;
  vector<vector<char>> a(n, vector<char>(m));
 for( int i =0;i<n;i++){
    for( int j=0;j<m;j++){
      cin>> a[i][j];
    }
  }
  
  int result=0;
  for(int i =0;i< n;i++){
    for(int l=0;l<m;){
      int r = l+1;
      if(r>=m) { result+=(a[i][l]=='.')?x:0; break;}
      if(a[i][l]=='.'&& a[i][r]=='.'){
        if(y<2*x) result+=y;
        else result+= 2*x;
        l+=2;
      }
      
      if(a[i][l]=='*'&& a[i][r]=='*')l+=2;
      if(a[i][l]=='.'&&a[i][r]=='*') {result+=x; l+=2;}
      if(a[i][l]=='*'&&a[i][r]=='.')l++;
      
      }
  }
  cout<<result<<endl;

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
