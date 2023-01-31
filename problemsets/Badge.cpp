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
struct edge{
  int u;
  int v;
};
class Graph{
  public:
    int n;
    vector<vector<int>> adj;
    Graph(int l, vector<edge> edges){
      n=l;
      adj = vector<vector<int>>(n+1, vector<int>());
      for( int i =0;i< edges.size();i++){
        adj[edges[i].u].push_back(edges[i].v);
        adj[edges[i].v].push_back(edges[i].u);
      }
    }
};
int DFS(vector<int> &p, vector<bool>& visited, int u){
  if(visited[u]) return u;
  visited[u] = true;
  return DFS(p,visited, p[u]);
}
void solve(){
  int n ;
  cin>> n;
  vector<int> p(n+1);
  for( int i=1;i<=n;i++)cin>>p[i];
  vector<bool> visited(n);
  for( int i=1;i<=n;i++){
    visited = vector<bool>(n, false);
    cout<<DFS(p,visited,i)<<" ";
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
