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
  int n, k;
  cin>> n>>k;
  vector<int> x(k);
  vector<pair< long long, long long>> pos(k+1); 
  for( int i =0;i< k; i++) {
    cin>> x[i];
    pos[i+1].first = n- x[i];
    pos[i+1].second = x[i];
  }
  sort(pos.begin()+1, pos.end());
  for( int i=1;i< k;i++) pos[i].first = pos[i-1].first + pos[i].first;
  int l = 1, r = k;
  while(l<=r){
    int mid = (l+r)/2;
    if( pos[mid].second<= pos[mid-1].first)r = mid-1;
    else l=mid+1;;
  }
  cout<< r <<endl;
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
