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
	int n,k;
  cin>> n>>k;
  string s;
  cin>> s;
  unordered_map<char,int> mp;
  for(int i =0;i< s.size();i++) mp[s[i]]++;
  unordered_map<char,int> mp2;
  int count = 0;
  for(int i=0;i< n;i++){
    if(mp2[s[i]]==0) count++;
    mp2[s[i]]++;
    if(count >k){
      cout<<"YES"<<endl;
      return;
    }
    if(mp2[s[i]]==mp[s[i]]) count--;
  }
  cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
