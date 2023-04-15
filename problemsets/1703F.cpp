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
	ll n;
  cin>> n;
  vector<long long> a(n);
  for(ll i =0;i< n;i++) cin>> a[i];
  vector<pair<long long, ll>> b;
  for(int i =0;i<n;i++) if(a[i]<i+1) b.push_back(make_pair(a[i], i+1));
  int m  = b.size();
  sort(b.begin(), b.end());
  ll result=0;
  for(int i =0;i<m;i++){
    ll l = i+1,r =m-1;
    while(l<=r){
      ll m = (l+r)/2;
      if(b[m].first> b[i].first && b[m].first> b[i].second) r = m-1;
      else l = m+1;
    }
    result+= m - l;
  }
  cout<<result<<endl;
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
