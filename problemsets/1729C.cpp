#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	string s;
  cin>>s;
  int n  = s.size();
  map<char, vector<int>> let_to_int;
  for(int i =0;i< n;i++){
    let_to_int[s[i]].push_back(i);
  }
  int direc = (s[0]< s[n-1])?1:-1;
  vector<int> ans;
  for(char c = s[0]; c!= s[n-1]+ direc; c+=direc){
    for(int i: let_to_int[c]){
      ans.push_back(i);
    }
  }
  int sum=0;
  for(int i =1;i< ans.size();i++){
    sum+=abs(s[ans[i]] - s[ans[i-1]]);
  }
  cout<< sum<<" "<<ans.size()<<endl;
  for(int i =0;i< ans.size();i++) cout<< ans[i]+1<<" ";
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
