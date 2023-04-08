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
  vector<vector<int>> a (n, vector<int> (n));
  int l=1, r = n*n, t = 0;
  for( int i =0;i<n;i++){ 
    for( int j =0;j<n;j++){
      if(t) a[i][j] = l++;
      else a[i][j] = r--;
      t ^= 1;
    }
    if(i&1) reverse(a[i].begin(), a[i].end());
  }
  for( int i =0;i< n;i++) for( int j =0;j< n;j++) cout<< a[i][j]<< " \n"[j==n-1];
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
