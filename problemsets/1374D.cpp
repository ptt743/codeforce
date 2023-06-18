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
	int n;
  long long k;
  cin>> n>>k;
  vector<long long> a(n);
  map<long long,int> mp;
  int mx = 0;
  for(int i =0;i< n;i++){
    cin>> a[i];
    if(a[i]%k!=0){
      mp[k- a[i]%k]++;
      mx = max(mp[k-a[i]%k],mx);
    }
   
  }
  long long ans = 0;  
  for(auto[a,b]: mp){
    if(b==mx)
   ans= a + (b-1)*k*1ll+1;
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
