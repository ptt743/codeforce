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
  vector<string> arr;
  unordered_map<string,int> mp;
  for(int i =0;i< n;i++){
    cin>>s;
    arr.push_back(s);
    mp[s] = 1;
  }
  string result ="";
  for(int i =0;i< n;i++){
    bool flag = false;
    for( int j =1; j< arr[i].size();j++){
      string s1 = arr[i].substr(0,j);
      string s2 = arr[i].substr(j,arr[i].size()- j);
      if(mp[s1]&&mp[s2]) {flag = true;}
    }
    cout<<flag;
  }
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
