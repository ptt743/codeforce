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
long long calc(vector<int>&a ){
  ll zeros = 0,ans = 0;
  for( int i = a.size()-1;i>=0;i--){
    if(a[i]==0) zeros++;
    else ans += zeros;
  }
  return ans;
}
void solve(){
	int n;
  cin>> n;
  vector<int> a(n);
  for(int i =0;i< n;i++) cin>>a[i];
  ll ans = calc(a);

  for( int i =0;i< n;i++){
    if(a[i]==0){
      a[i]= 1;
      ans = max(ans, calc(a));
      a[i]=0;
      break;
    }
  }
  for(int i=n-1; i>=0;i--){
    if(a[i]==1){
      a[i]=0;
      ans = max(ans,calc(a));
      a[i]=1;
      break;
    }
  }
  cout<<ans<<endl;

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
