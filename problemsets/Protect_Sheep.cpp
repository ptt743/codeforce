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
void DFS(int u, int v, vector<vector<char>>& graph, vector<vector<bool>>& visited, bool& check){
  visited[u][v] = true;
  int r  = graph.size()-1;
  int c = graph[0].size()-1;
  for(int i=-1;i<=1;i++)
    for(int j=-1;j<=1;j++){
      if(i*j==0 && u+i>=1 && u+i<=r && v+j>=1 && v+j<=c){
        if(!visited[u+i][v+j]&& graph[u+i][v+j]!='D'){
          if(graph[u+i][v+j]=='S'){
            if(graph[u][v]=='W') check = true;
            else graph[u][v] = 'D';
            visited[u+i][v+j] = true;
            continue;
          }
          DFS(u+i,v+j, graph,visited, check);
        }
      }
  }
}
void solve(){
  int r,c;
  cin>>r>>c;
  vector<vector<char>> cells(r+1, vector<char>(c+1,'.'));
  vector<vector<bool>> visited(r+1, vector<bool>(c+1, false));
  vector<edge> wolfs;
  for( int i =1;i<=r;i++)
    for( int j=1;j<=c;j++){
      cin>> cells[i][j];
      if( cells[i][j]=='W')
        wolfs.push_back({i,j});
    }
  for(int i =0;i<wolfs.size();i++){
        bool check = false;
        visited = vector<vector<bool>> (r+1, vector<bool>(c+1,false));
        DFS(wolfs[i].u,wolfs[i].v,cells,visited, check);
        if(check) {
          cout<<"No"<<endl;
          return ;
        }
  }
  cout<<"Yes"<<endl;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++)
      cout<<cells[i][j];
   cout<<endl;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
