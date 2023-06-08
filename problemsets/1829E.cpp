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
	int n,m;
  cin>> n>> m;
  vector<vector<int>> adj(n, vector<int>(m,0));
  vector<vector<bool>> visited(n, vector<bool>(m));
  vector<pair<int,int>> p;
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++){
      cin>>adj[i][j];
      if(adj[i][j]>0)p.push_back(make_pair(i,j));
    }
  }
  int dx[] = {1,-1,0,0};
  int dy[] = {0,0,1,-1};
    int ans = 0;
  for(int i =0;i< p.size();i++){
    if(!visited[p[i].first][p[i].second]){
      queue<pair<int,int>> qq;
      qq.push(make_pair(p[i].first, p[i].second));
      visited[p[i].first][p[i].second] = true;
      int count = adj[p[i].first][p[i].second];
      while(!qq.empty()){
        pair<int,int> top = qq.front();
        qq.pop();
        for(int j =0;j< 4;j++){
          int u  = top.first + dx[j];
          int v  = top.second + dy[j];
          if(u<0 || u>= n || v<0 || v>= m) continue;
          if(visited[u][v] || adj[u][v]==0) continue;
          count += adj[u][v];
          visited[u][v] = true;
          qq.push(make_pair(u,v));
        }
      }
      ans = max(ans,count);
    }
  }
  cout<<ans<<endl;

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
