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
  vector<vector<int>> adj(n+1, vector<int>());
  vector<bool> visited(n+1, false);
  for(int i =2;i<=n;i++){
    int t; cin>> t;
    adj[i].push_back(t);
    adj[t].push_back(i);
  }
  vector<int> c(n+1);
  for(int i =1;i<=n;i++) cin>> c[i];

  function<void(int,int,int&)> dfs = [&](int u,int color, int& count)-> void{
    visited[u] = true;
    for(int i =0;i< adj[u].size();i++){
      int v  = adj[u][i];
      if(!visited[v]){
        if(c[v]!=color){
          count++;
        }
        dfs(v,c[v],count);
      }
    }
  };
  int count = 1;
  dfs(1,c[1], count);
  cout<< count<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
