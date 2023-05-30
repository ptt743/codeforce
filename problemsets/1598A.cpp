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
	int n;
  cin>> n;
  vector<vector<int>> matrix(2, vector<int>(n,0));
  vector<vector<bool>> visited(2, vector<bool>(n, false));
  for( int i =0;i<2;i++){
    for( int j=0;j<n;j++){
      char temp;
      cin>> temp;
      matrix[i][j]= temp -'0';
    }
  }
  stack<pair<int,int>> st;
  st.push(make_pair(0,0));
  visited[0][0]= true;
  bool flag = false;
  while(!st.empty()){
    pair<int, int> top = st.top();
    st.pop();
    if(top.first == 1 && top.second== n-1) {
      flag = true;
      break;
    }
    for(int i =-1;i<=1;i++){
      for( int j =-1;j<=1;j++){
        int y  = top.first+ i;
        int x = top.second + j;
        if((i!=0||j!=0) && (y>=0 && y<2) &&(x>=0 && x<=n) && !visited[y][x] && matrix[y][x]==0){
          st.push(make_pair(y,x));
          visited[y][x] = true;
        }
      }
    }
  }
  if(flag) cout<<"YES"<<endl;
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
