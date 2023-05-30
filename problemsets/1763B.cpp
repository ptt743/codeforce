#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n,k;
  cin>> n>>k;
  vector<long long> h(n), p(n);
  for( int i =0;i< n;i++) cin>> h[i];
  for( int i =0;i< n;i++) cin>> p[i];
  vector<pair<int,int>> pairs;
  for( int i =0;i< n;i++){
    pairs.push_back(make_pair(h[i], p[i]));
  }
  sort(pairs.begin(), pairs.end());
  sort(h.begin(), h.end());
  for(int i =n-2;i>=0;i--){
   pairs[i].second = min(pairs[i].second, pairs[i+1].second);
  }
  long long temp = k;
  int index =0;
  while(index!=n && k>0){
    index = upper_bound(h.begin(),h.end(), temp) - h.begin();
    if(index!= n){
      k = k - pairs[index].second;
      temp = k + temp;
    }
  }
  if(index!=n) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;

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
