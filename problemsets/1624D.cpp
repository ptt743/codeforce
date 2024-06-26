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
void solve(){
	int n,k;
  cin>> n>>k;
  string s;
  cin>> s;
  map<char, int> mp;
  for(int i =0;i< n;i++) mp[s[i]]++;
  int even  = 0;
  int odd =0;
  for(auto it : mp){
    even += it.second/2;
    odd  += it.second%2;
  }
  int ans = (even/k)*2;
  odd += 2*(even%k);
  if(odd>= k) ans+=1;
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
