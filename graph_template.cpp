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
    int timer;
    vector<vector<int>> adj;
    vector<bool> visited;
    Graph(int l){
      n=l;
      adj = vector<vector<int>>(n+1, vector<int>());
      visited = vectot<bool>(n+1); 
    }

    void add(int u, int v){
      adj[u].push_back(v);
    }

}
void solve(){
	
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
