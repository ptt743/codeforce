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
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  vector<pair<int,int>> res;
  int idx = -1;
  for(int i =1;i< n;i++){
    if(a[i]!=a[0]){
      idx = i+1;
      res.push_back(make_pair(1,i+1));
    }
  }
  if(idx==-1) cout<<"NO"<<endl;
  else {
    cout<<"YES"<<endl;
    for(int i =1;i< n;i++)if(a[i]==a[0]) res.push_back(make_pair(idx,i+1));
    for(int i =0;i< res.size();i++) cout<<res[i].first<<" "<<res[i].second<<endl; 
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
