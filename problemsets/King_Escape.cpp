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
class Graph{
  public:
    int n;
    vector<vector<int>> adj;
    Graph(int l){
      n=l;
      adj = vector<vector<int>>(n+1, vector<int>());
    }
    void add(int u, int v){
      adj[u].push_back(v);
    }
};
void solve(){
  int n ;
  cin>>n;
  int ax,ay,bx,by, cx, cy;
  cin>> ax>>ay;
  cin>> bx>>by;
  cin>> cx>>cy;
  vector<vector<bool>> visited (n+1, vector<bool>(n+1,false));
  for( int i =1;i<=n;i++){
    visited[i][ax] = true;
    visited[ay][i] = true;
  }
  visited[ax][ay] = true;
  int a = ax, b= ax;
  for( int i= ay;i<=n;i++){
    if(a>=1)visited[i][a--] = true;
    if(b<=n) visited[i][b++] = true;
  }
  a = ax, b=ax;
  for(int i = ay;i>=1;i--){
    if(a>=1) visited[i][a--] = true;
    if(b<=n) visited[i][b++] = true;
  }

  queue<pair<int, int >> qq;
  qq.push(make_pair(by,bx));
  visited[by][bx] = true;
  if(visited[cy][cx]){
    cout<<"NO"<<endl;
    return ;
  }
  while(!qq.empty()){
    pair<int, int> u = qq.front();
    int first = u.first;
    int second = u.second;
    qq.pop();
    for( int i =-1;i<=1;i++){
      for( int j =-1;j<=1;j++){
        if(first+i>=1 && first+i<=n && second+j>=1 && second+j<=n)
        if(!visited[first+i][second+j]){
          visited[first+i][second+j]= true;
          qq.push(make_pair(first+i, second+j));

        }
      }
    }
  }
  if(visited[cy][cx]) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
