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
  vector<pair<int,int>> nodes;
  for(int i =0;i< n;i++){
    int x,y;
    cin>> x>> y;
    nodes.push_back(make_pair(x,y));
  }
  vector<bool> visited(n);
  function<void(int)> dfs = [&](int u)-> void{
    visited[u] = true;
    for(int i =0;i< n;i++){
      if(!visited[i] && (nodes[i].first == nodes[u].first || nodes[i].second == nodes[u].second)){
        dfs(i);
      }
    }
  };
  int ans = -1;
  for(int i =0;i< n;i++){
    if(!visited[i]){
      ans++;
      dfs(i);
    }
  }
  cout<< ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
