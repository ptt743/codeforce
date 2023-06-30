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
	int n, m;
  cin>> n>>m;
  vector<vector<char>> g(n,vector<char>(m));
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++) cin>> g[i][j];
  }
  vector<vector<bool>> visited(n, vector<bool> (m));
  int dx[] = {0,0,1,-1};
  int dy[] = {-1,1,0,0};
  function<void(int, int)> dfs = [&](int u, int v)-> void{
      visited[u][v] = true;
      for(int i =0;i< 4;i++){
        int x = u + dx[i];
        int y = v + dy[i];
        if(x>=0 && x< n && y>=0 && y<m && !visited[x][y]&& g[x][y]=='.'){
          g[x][y]= (g[u][v]=='B')?'W':'B';
          dfs(x,y);
        }
      }
  };
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++){
      if(!visited[i][j] && g[i][j]=='.'){
        g[i][j] = 'B';
        dfs(i,j);
      }
    }
  }
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++){
      cout<<g[i][j];
    }
    cout<<endl;
  }

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
