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
  int n;
  cin>> n;
  vector<long long> s(n);
  vector<long long> f(n);
  for(int i =0;i<n;i++) cin>> s[i];
  for( int i =0;i<n;i++) cin>> f[i];
  cout<< f[0]- s[0]<<" ";
  for(int i=1;i< n;i++){
    if(s[i]>=f[i-1]) cout<< f[i]- s[i]<<" ";
    else cout<< f[i] -f[i-1]<<" ";
  }
  cout<<endl;
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
