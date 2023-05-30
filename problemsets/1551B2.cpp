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
	int n, k;
  cin>> n>>k;
  vector<int> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  map<int, vector<int>> mp;
  int m =0;
  for(int i =0;i< n;i++){
    if(mp[a[i]].size()<k){
      mp[a[i]].push_back(i);
      m++;
    }
  }
  m  -= m%k;  
  int color = 0;
  vector<int> result(n,0);
  for(auto it: mp){
    for(int i : it.second){
      result[i] = ++color;
      color%=k;
      if(--m==0){
        for(int j : result) cout<<j<<" ";
        cout<<endl;
        return;
      }
    }
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
