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
  vector<int> a(n);
  vector<int> b(n);
  for( int i =0;i<n;i++) cin>> a[i];
  for( int i =0;i< n;i++) cin>>b[i];
  unordered_map<int, int> mp;
  for(int i =0;i< n;i++){
   mp[a[i]]=i;
  }
  int count=0;
  for(int i =n-1; i>0; i--){
    if(mp[b[i]]< mp[b[i-1]]) break;
    count++;
  }
  count++;
  cout<< n-count<<endl;
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
