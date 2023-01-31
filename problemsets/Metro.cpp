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
class graph{
  public:
    int n ;
    vector<vector<int>> adj;
    graph(int l){
      n =l;
      adj = vector<vector<int>>(n+1, vector<int>());
    }
    void add(int u, int v){
      adj[u].push_back(v);
    }
};
void DFS(graph & gr,vector<bool>& visited, int u){
  visited[u] = true;
  for( int i =0;i< gr.adj[u].size();i++){
    if(!visited[gr.adj[u][i]])
      DFS(gr, visited, gr.adj[u][i]);
  }
}
void solve(){
  int n ,s;
  cin>> n>>s;
  vector<int> a(n+1), b(n+1);
  graph gr(n);
  for( int i =1;i<=n;i++){
    cin>> a[i];
    if(a[i] && a[1]){
      gr.add(1,i);
    }
  }
  for( int i =1 ;i<=n;i++){
    cin>> b[i];
    if(b[i] && b[s]) gr.add(i,s);
    
  }
  vector<bool> visited(n+1, false);
  DFS(gr, visited, 1);
  if(visited[s])cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
