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
  for( int i=0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  long long l  = 0, r = 1e9;
  while(l<=r){
    long long mid = (r+l)/2;
    int count = 0;
    int bar = 2e9+1;
    for(int i =n-1;i>=0;i--){
      int left = a[i] - mid, right = a[i]+ mid;
      if(right<bar) {
        count++;
        bar = left;
      }
    }
    if(count<=3) r = mid-1;
    else l= mid+1;
  }
  cout<< l<< endl;
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
