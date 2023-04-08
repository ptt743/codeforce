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
  vector<vector<int>> graph(n+1, vector<int>());
  for( int i =2; i<=n;i++){
    int t;
    cin>> t;
    graph[t].push_back(i);
  }
  queue<int> qq;
  qq.push(1);
  bool flag = true;
  while(!qq.empty()){
    int top = qq.front();
    qq.pop();
    int leafs = 0;
    for( int i =0;i< graph[top].size();i++){
      int node  = graph[top][i];
      if(graph[node].size()==0) leafs++;
      qq.push(graph[top][i]);
    }
    if(graph[top].size()>0 && leafs<3){
      flag = false;
      break;
    }
  }
  if(flag) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
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
