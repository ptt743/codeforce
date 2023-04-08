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
  vector<int> roots;
  for(int i =0;i< n;i++){
    int t;
    cin>> t;
    if(t!=-1)graph[t].push_back(i+1);
    else roots.push_back(i+1);
  }
  int result = 0;
  for( int i =0;i< roots.size();i++){
    int temp =0;
    queue<int> qq;
    qq.push(roots[i]);
    while(!qq.empty()){
      vector<int> nodes;
      temp++;
      while(!qq.empty()){
      int top = qq.front();
      qq.pop();
      for(int j = 0; j< graph[top].size();j++){
        nodes.push_back(graph[top][j]);
      }
    }
      for(int j =0; j< nodes.size(); j++) qq.push(nodes[j]);
  }
    result = max(result, temp);
  }
  cout<<result<<endl;
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
