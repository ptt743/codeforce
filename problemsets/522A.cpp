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
void toLowercase(std::string& str) {
    for (char& c : str) {
        c = std::tolower(c);
    }
}
void solve(){
	int n;
  cin>> n;
  unordered_map<string, vector<string>> qq;
  for(int i =0;i< n;i++){
    string a,b, c;
    cin>> a>> b>> c;
    toLowercase(a);
    toLowercase(c);
    qq[a].push_back(c);
    qq[c].push_back(a);
  }
  unordered_map<string, bool> visited;
  function<int(string)> dfs = [&](string u)-> int{
    visited[u] = true;
    int ans = 0;
    for(int i =0;i< qq[u].size();i++ ){
      if(!visited[qq[u][i]]){
        ans = max(ans, dfs(qq[u][i]));
      }
    }
    return ans+1;
  };
  cout<< dfs("polycarp")<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
