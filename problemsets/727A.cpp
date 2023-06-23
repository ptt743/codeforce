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
long long a, b;
  cin>> a>> b;
  vector<long long> path;
  std::function<bool(long long,long long, vector<long long>& )> dfs=[&](long long s, long long t,vector<long long> & path)-> bool {
    path.push_back(s);
    if(s==t) return true;
    if(s>t) {
      path.pop_back();
      return false;
    }
    bool result = false;
     result|=dfs(s*10+1,t,path);
     result|=dfs(s*2,t,path);
     
     if(!result)path.pop_back();
     return result;
  };
  if(dfs(a,b,path)){
    cout<<"YES"<<endl;
    cout<<path.size()<<endl;
    for(long long item: path) cout<<item<<" ";
    cout<<endl;
  } else cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
