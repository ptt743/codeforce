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
	int r, c;
  cin>> r>> c;
  vector<vector<char>> adj(r, vector<char>(c));
  vector<pair<int,int>> w;
  for(int i =0;i< r;i++){
    for(int j =0;j<c;j++){
      cin>> adj[i][j];
      if(adj[i][j]=='W') w.push_back(make_pair(i,j));
    }
  }
  int dx[]={0,0,1,-1};
  int dy[]={1,-1,0,0};
  for(int i=0;i< w.size();i++){
    for(int j=0;j<4;j++){  
      int u  = w[i].first + dx[j];
      int v = w[i].second + dy[j];
      if(u<0 || u>= r || v<0 || v>=c ) continue;
      if(adj[u][v]=='S'){
        cout<<"No"<<endl;
        return;
      }
    }
  }
  cout<<"Yes"<<endl;
  for(int i =0;i<r;i++){
    for(int j =0;j<c;j++){
      if(adj[i][j]=='.') cout<<"D";
      else cout<<adj[i][j];
    }
    cout<<endl;
  }

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
