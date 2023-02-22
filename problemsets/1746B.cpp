#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>> n;
  vector<int> a(n);
  vector<vector<int>> count( 2, vector<int>(n+1,0));
  for( int i =0;i< n;i++){
    cin>> a[i];
    count[0][i+1] = count[0][i]+ ((a[i]==0)?1:0);
    count[1][i+1] = count[1][i] + ((a[i]==1)?1:0);
  }
  int ans = n-1;
  for( int last_zero=0; last_zero<= n; last_zero++){
    ans = min(ans, max(count[1][last_zero], count[0][n] - count[0][last_zero]));
  }
  cout<< ans<<endl;
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
