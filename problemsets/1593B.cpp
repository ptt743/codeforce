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
const string substring[] = {"25","50","75","00"};
const int inf = 100;
void solve(){
	string s;
  cin>> s;
  int result = 100;
  for(auto t: substring){
      int size = s.size()-1;
      int ans = 0;
      while(size>=0 && s[size]!=t[1]){size--; ans++;}      
      if(size<0) ans = 100;
      size--;
      while(size>=0 && s[size]!=t[0]){ size--; ans++;}
      if(size<0) ans = 100;
      result = min(result, ans);
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
