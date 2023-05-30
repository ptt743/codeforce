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
  int n , k;
  cin>> n>>k;
  string s;
  cin>> s;
  int num = n/k;
  vector<int> count(26,0);
  for(char item:s) count[item-'a']++;
  string ans = "";
  for(int i =0;i<=min(25,n/k);i++){
     while(k - ans.size() > count[i]){
       ans+=(i + 'a');
     }
  }
  char c = 'a'+ min(n/k,25);
  while(k>ans.size()){
    ans+= c;
  }
  reverse(ans.begin(), ans.end());
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
