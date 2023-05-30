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
	int n;
  cin>> n;
  string s;
  cin>> s;
  set<char> st1,st2;
  for(int i =0;i< n;i++){
    if(i%2==0){
      st1.insert(s[i]);
    } else {
      st2.insert(s[i]);
    }
  }
  for(auto it: st1){
    if(st2.find(it)!=st2.end()){
      cout<<"No"<<endl;
      return ;
    }
  }
  cout<<"Yes"<<endl;
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
