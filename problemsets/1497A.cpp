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
  vector<int> a(n);
  unordered_map<int,bool> mp;
  for(int i =0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  vector<int> back;
  for(int i=0;i< n;i++){
    if(mp[a[i]]== false){
      cout<<a[i]<<" ";
      mp[a[i]]= true;
    }
    else back.push_back(a[i]);
  }
  for( int i =0;i< back.size();i++) cout<< back[i]<<" ";
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
