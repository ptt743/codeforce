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
	int k,n,m;
  cin>> k>>n>>m;
  vector<int> a(n), b(m);
  for( int i =0;i< n;i++) cin>> a[i];
  for( int i=0; i< m;i++) cin>> b[i];
  int l=0, r=0;
  vector<int> result;
  bool flag = true;
  while( l<n&& r< m){
    bool check_n=false, check_m = false;
    while(l<n &&  a[l]==0){ result.push_back(0); l++; k++;}
    while(r<m && b[r]==0) { result.push_back(0); r++; k++;}
    while(l<n &&a[l]!=0&& a[l]<= k){result.push_back(a[l]); l++;}
    while( r< m &&b[r]!=0 &&  b[r]<=k){ result.push_back(b[r]); r++;}
    if(l==n || (l<n && a[l]== 0)) check_n = true;
    if(r==m || (r<m && b[r]==0)) check_m = true;
    if(!check_n && !check_m){
      flag = false;
      break;
    }
  }
  while(l< n) {
    if(a[l]>k) {
     flag = false;
     break;
    } if (a[l]==0) k++;
    result.push_back(a[l]);l++;}
 
  while(r<m){ 
    if(b[r]>k){
      flag = false;
      break;
    }
    if (b[r]==0) k++;
    result.push_back(b[r]); r++;}
  if(!flag) cout<<"-1";
  else for( int i =0; i< m+n;i++) cout<< result[i]<<" ";
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
