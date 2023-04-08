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
  vector<long long> a(n);
  unordered_map<long long,int> mp;
  for( int i =0;i<n;i++){ cin>> a[i]; mp[a[i]]++;}
  long long sum =0;
  for( int i =0;i< n;i++) sum += a[i];
  long long sum_two =  2*sum/n;
  if( 2*sum %n !=0) {cout<< "0"<<endl; return ;}
  int ans =0;
  for(int i =0;i< n;i++){
    long long a2 = sum_two - a[i];
    ans += mp[a2];
    if(a2==a[i]) ans--;
  }
  cout<< ans/2<<endl;
  
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
