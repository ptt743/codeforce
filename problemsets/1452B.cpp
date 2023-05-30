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
	ll s=0,mx=0,n; cin>>n;
  for(int i=0;i<n;i++)
  {
   ll k; cin>>k; mx=max(mx,k);
   s+=k;
  }
  ll H=max(mx,(s+n-2)/(n-1));
  cout<<H*(n-1)-s<<endl;
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
