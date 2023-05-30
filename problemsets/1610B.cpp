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
bool ans ;
void check(int x, vector<int> &a){
  int m=0;
  int n = a.size()-1;
  vector<int> b(n+1);
  for( int i =1;i<=n;i++)
    if(a[i]!=x){
      b[++m]= a[i];
    }
  for( int i =1;i<=m;i++)
    if(b[i]!= b[m-i+1]) return ;
  ans = true;
}
void solve(){
	int n ;
  cin>> n;
  vector<int> a(n+1);
  ans = true;
  for( int i =1;i<=n;++i) cin>>a[i];
  for( int i =1;i<=n;++i){
    if(a[i] != a[n+1-i]){
      ans = false;
      check(a[i], a);
      check(a[n+1-i],a);
      break;
    }
  }
  if(ans) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
