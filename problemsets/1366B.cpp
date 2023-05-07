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
	long long n,x;
  int m;
  cin>> n>>x>>m;
  int left = x, right =x;
  for(int i =0;i< m;i++){
    int l,r;
    cin>> l>>r;
    if((right<=r&& right>= l) || ( left<=r && left>= l))
    {
      left  = min(left, l);
      right = max(right,r);
    }
  }
  cout<<(right - left+1)<<endl;
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
