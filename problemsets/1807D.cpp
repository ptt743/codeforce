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
	int n,q;
  cin>>n>>q;
  vector<long long> a(n+1);
  for( int i =1;i<=n;i++){
    cin>> a[i];
    a[i]= a[i-1] + a[i];
  }
  long long sum = a[n];
  while(q--){
    int l,r;
    long long k;
    cin>> l>> r >>k;
    if((sum - (a[r] - a[l-1])+ (r-l+1)*k)%2==0) cout<< "NO"<<endl;
    else cout<<"YES"<<endl;
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
