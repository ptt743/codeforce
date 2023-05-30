#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<unordered_set>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
class Graph{
  public:
    int n;
    int timer;
    vector<vector<pair<int,int>>> adj;
    vector<bool> visited;
    vector<int> tin, low;
    unordered_set<int> comp;
    vecotr
    Graph(int l){
      n=l;
      adj = vector<vector<int>>(n+1, vector<int>());
      visited = vectot<bool>(n+1, false); 
      low = vector<int> (n+1, -1);
      tin = vector<int> (n+1, -1);
      timer =0;
    }

    void add(int u, int v){
      adj[u].push_back(make_pair(v,w));
      adj[v].push_back(make_pair(u,w));
    }


}
void dfs(Graph & gp, int u, int p = -1){
  gp.visited[u] = true;
  gp.comp.insert(u);
  gp.tin[u] = gp.low[u] = gp.timer++;
  for( int to: gp.adj[u]){
    if(to == p) continue;
    if(gp.visited[to]){
      gp.low[v] = min(gp.low[v], gp.tin[to]);
    } else {
      dfs(gp, to, v);
      gp.low[v] = min(gp.low[v], gp.low[to]);
      if(gp.low[to]> gp.tin[v]){
        // is bridge

      }
    }
  }
}
void solve(){
 int n , m;
 int s, t;
 int x,y,w;
 Graph gp(n);
 for( int i =0;i< m;i++) {
   cin>> x>>y>>w;
   gp.push(x,y);
 }
 for(int i =1;i<=n;i++){
   if(!gp.visited[i]){
     dfs(gp,i);
   }
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
