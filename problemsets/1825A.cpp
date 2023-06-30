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
  int n = s.size();
  unordered_map<char,int> mp;
  for(int i =0;i< n;i++) mp[s[i]]++;
  int left = 0, right =n-1;
  bool check = true;
  while(left<=right){
    if(s[left]!=s[right]){
      check = false;
      break;
    }
    left++;
    right--;
  }
  if(mp.size()==1){ 
    cout<<"-1"<<endl;
    return;
  }
  if(check){
    cout<<n-1<<endl;
    return;
  } 
  cout<<n<<endl;
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
