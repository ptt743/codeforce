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
  vector<long long> a(n), b(n,2e5+1);
  long long l=2e5+2,v;
  long long sum = 0;
  for(int i =0;i< n;i++){ cin>> a[i]; sum+=a[i];}
  while(q--){
    int t;
    cin>> t;
    int i; 
    ll x;
    if(t==1){
      cin>> i>> x;
      i--;
      sum+=x - ((b[i]<l)?a[i]:v);
      a[i] = x; 
      b[i] = q;
    } else {
      cin>> x;
      sum = x*n;
      l = q; v = x;
    }
    cout<< sum<<endl;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
