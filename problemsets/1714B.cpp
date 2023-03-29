#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n ;
  cin>> n;
  vector<int> a(n);
  int result = 0;
  for( int i =0;i<n;i++) cin>> a[i];
  unordered_map<int, bool> mp;
  for( int i =n-1;i>=0;i--){
    if(mp[a[i]]){ result =i+1; break;}
    else mp[a[i]] = true;
  }
  cout<< result<<endl;
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
