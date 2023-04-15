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
	int m,n;
  cin>>m;
  vector<vector<int>> input;
  unordered_map<int,int> mp;
  for(int i =0;i<m;i++){
    cin>> n;
    vector<int> temp;
    for(int j=0;j< n;j++){
      int t;
      cin>> t;
      temp.push_back(t);
      
    }
    input.push_back(temp);
  }
  vector<int> result;
  bool flag = true;
  for(int i =m-1; i>=0;i--){
    bool f  = false;
    for(int j =0;j< input[i].size();j++){
      if(mp[input[i][j]]) continue;
      else if(!f) {
        f = true;
        result.push_back(input[i][j]);
      }
       mp[input[i][j]] = 1;
    }
    if(!f) flag = false;
  }
  if(!flag) {cout<<"-1"<<endl; return;}
  reverse(result.begin(), result.end());
  for(int i =0;i< result.size();i++) cout<<result[i]<<" ";
  cout<<endl;

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
