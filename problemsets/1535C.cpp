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
	string s;
  cin>> s;
  vector<vector<int>> lst(2, vector<int>(2,-1));
  long long ans = 0;
  for(int i =0;i< s.size();i++){
    int j  = i-1;
    int p = i&1;
    if(s[i]!='1') j = min(j,)
  }
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
