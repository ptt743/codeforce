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
  vector<vector<int>> dp(2, vector<int>(2,-1));
  long long ans = 0;
  for(int i =0;i< s.size();i++){
    int j  = i-1;
    int p = i&1;
    if(s[i]!='1') j = min(j,max(dp[0][p^1], dp[1][p]));
    if(s[i]!='0') j = min(j,max(dp[1][p^1], dp[0][p]));
    ans += i - j;
    if(s[i]!='?') dp[s[i]-'0'][p] = i;
  }
  cout<<ans<<endl;
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
