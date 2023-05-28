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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
struct PairCompare {
    bool operator()(const std::pair<long long, long long>& lhs, const std::pair<long long, long long>& rhs) const {
        return lhs.second > rhs.second;
    }
};
void solve(){
	int n,k;
  cin>> n>>k;
  set<long long> st;
  queue<long long> qq;
  for(int i =0;i< n;i++){
    long long t;
    cin>> t;
    if(st.find(t)==st.end()){
      if(qq.size()==k){
        long long id = qq.front();
        st.erase(id);
        qq.pop();
      }
      qq.push(t);
      st.insert(t);
    }
  }
  vector<long long> res;
  while(!qq.empty()){
    res.push_back(qq.front());
    qq.pop();
  }
  reverse(res.begin(), res.end());
  cout<<res.size()<<endl;
  for(long long id : res) cout<<id<<" ";
  
  cout<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
