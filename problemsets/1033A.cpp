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
  int ax,ay;
  int bx,by;
  int cx,cy;
  cin>> ax>> ay;
  cin>> bx>> by;
  cin>> cx>> cy;
  ax--;ay--;
  bx--;by--;
  cx--;cy--;
  vector<vector<bool>> visited(n, vector<bool> (n));
  for(int i =0;i<n;i++){
    for( int j =0;j<n;j++){
      int u = abs(i - ax);
      int v = abs(j - ay);
      if((u==v || u==0 || v==0)){
        visited[i][j] = true;
      }
    }
  }
  int dx[] ={0,0,-1,1,1,1, -1,-1};
  int dy[] ={1,-1,0,0,1,-1,1,-1};
  queue<pair<int,int>> qq;
  qq.push(make_pair(bx,by));
  visited[bx][by]= true;
  
  while(!qq.empty()){
    pair<int,int> top = qq.front();
    qq.pop();
    for(int i =0;i< 8;i++){
      int u = top.first + dx[i];
      int v = top.second + dy[i];
      if(u<0 || u>=n || v<0 || v>=n) continue;
      if(visited[u][v]) continue;
      visited[u][v] = true;
      qq.push(make_pair(u,v));
      if(u==cx && v== cy){
        cout<<"YES"<<endl;
        return;
      }
    }
  }
  cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
