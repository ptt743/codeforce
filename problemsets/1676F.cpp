#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<unordered_map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n, k;
  cin>> n>>k;
  vector<int> a(n);
  map<int,int> mp;
  for( int i=0;i< n;i++){
    cin>> a[i];
    mp[a[i]]++;
  }
  sort(a.begin(), a.end());
  int left=a[0], right=a[0];
  bool sequence = false;
  int l=0, r=0;
  for(int i =0;i<=n;i++){
    if(sequence && i==n && (right - left+1)>= (r-l+1)){
      r = right;
      l = left;
      break;
    }
    if(mp[a[i]]>= k && sequence== false){
      left  = a[i];
      right  = a[i];
      sequence = true;
    } else if (mp[a[i]]>= k ){
      right  = a[i];
    } else if (sequence == true && (right - left+ 1)>= (r-l+1) ) {
      sequence = false;
      l = left;
      r = right;
    }
    int temp = a[i];
    while(i+1<n && a[i+1]==temp) i++;
    if( sequence && i+1< n && a[i+1]- temp >1){
      sequence  = false;
      if(right - left >= r-l){ l= left; r = right;}
    }
  }
  if(r!=0 && l!=0) cout<<l<<" "<<r<<endl;
  else cout<<"-1"<<endl;
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
