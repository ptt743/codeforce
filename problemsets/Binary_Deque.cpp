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
  int n, s;
  cin>> n>> s;
  vector<long long> sum(n+1,0);
  for( int i =1;i<=n;i++){
    int a;
    cin>> a;
    sum[i] = sum[i-1]+ a;
  }
  int ans = INT_MAX;
  for( int i=1;i<=n;i++){
    int l = i;
    int r = n;
    while(l<=r){
      int mid = (l+ r)/2;
      if( sum[mid]- sum[i-1]> s) r = mid-1;
      else l = mid+1;
    }
    if(sum[r]- sum[i-1]==s) ans = min(ans, n-r + i-1);
  }
  cout<<((ans!=INT_MAX)?ans:-1)<<endl;
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
