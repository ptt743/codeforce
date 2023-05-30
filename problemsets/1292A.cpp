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
bool bfs(vector<vector<int>> gr){
  int n = gr[0].size();
  queue<pair<int,int>> qq;
  vector<vector<bool>> visited(2, vector<bool>(n,false));
  qq.push(make_pair(0,0));
  visited[0][0] = true;
  int dy[] = {1,0,0};
  int dx[] = {0,1,-1};
  while(!qq.empty()){
    pair<int,int> top = qq.front();
    qq.pop();
    for(int i =0;i< 3;i++){
      int x = top.first + dx[i];
      int y  = top.second + dy[i];
      if(x<0 || x>1 || y<0 || y>=n) continue;
      if(visited[x][y]) continue;
      if(gr[x][y]==0) continue;
      if(x==1 && y==n-1) return true;
      visited[x][y] = true;
      qq.push(make_pair(x,y));
    }
  }
  return false;
}
int solve2(vector<vector<int>> & graph,int x,int y, int &blockpair){
  int dy[] = {-1,0,1};
  int n = graph[0].size();
  int delta = graph[x][y]?-1:1;
  for(int i =0;i< 3;i++){
    int t = y + dy[i];
    if(t<0 || t>=n) continue;
    if(graph[1-x][t]==0) blockpair+= delta;
  }
  return 0;
}
void solve(){
	int n, q;
  cin>> n>> q;
  vector<vector<int>> gr(2,vector<int>(n,1));
  int blockpair = 0;
  while(q--){
    int x, y;
    cin>> x>> y;
    if(gr[x-1][y-1])gr[x-1][y-1]=0;
    else gr[x-1][y-1]=1;
    solve2(gr,x-1,y-1,blockpair);
    if(blockpair) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
