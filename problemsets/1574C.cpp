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
	int n ;
  cin>> n;
  vector<long long > a(n);
  long long sum =0;
  for( int i =0;i<n;i++){ cin>> a[i]; sum+= a[i];}
  sort(a.begin(), a.end());
  long long max_val = a[n-1];
  int m;
  cin>> m;
  for(int i =0;i< m;i++){
    long long x,y;
    long long result = 0;
    cin>>x>>y;
    auto it = lower_bound(a.begin(),a.end(),x) - a.begin();
    long long ans  = 2e18;
    if(i>0)ans  = min(ans, x - a[it-1] + max(0ll,y - sum + a[it-1]));
    if(i<n) ans = min(ans, max(0ll,y-sum+ a[it]));
    cout<<ans<<endl;
  }


}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
