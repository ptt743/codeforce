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
  int n  = s.size();
  unordered_map<char,int> mp;
  for(int i =0;i< n;i++){
    mp[s[i]]++;
  }
  int count = 0;
  int count2 = 0;
  int count3 = 0;
  for(auto item: mp){
    if(item.second==1){
      count++;
    } else if(item.second %2==0) count2++;
    else count3++;
  }
  if(count + count3>1) {
    cout<<"NO"<<endl;
    return;
  }
  if(count2+ count3<=1){
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;

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
