#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
bool option(pair<int,int> a, pair<int,int> b){
  return a.first> b.first || (a.first==b.first && a.second< b.second);
}
void solve(){
	int n,k;
  cin>> n>>k;
  vector<pair<int,int>> a;
  for(int i =0;i< n;i++){
    int p,t;
    cin>>p>>t;
    a.push_back(make_pair(p,t));
  }
  sort(a.begin(), a.end(), option);
  map<int,int> mp;
  mp[n-1]++;
  int cur =n-1;
  for(int i =n-2;i>=0;i--){
    if(a[i].first==a[i+1].first && a[i].second== a[i+1].second){
      mp[cur]++;  
    } else{
      mp[i]++;
      cur=i;
    }
  }
  auto it =mp.lower_bound(k-1);
  cout<<(*it).second<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
