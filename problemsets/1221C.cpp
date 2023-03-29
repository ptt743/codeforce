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
  long long c,m,x;
  cin>>c>>m>>x;
  long long l = 0, r = min(c,m);
  while(l<=r){
    long long mid = (l+r)/2;
    if(c+m+x - 2*mid >= mid) l = mid+1;
    else r = mid-1;
  }
  cout<< r<<endl;
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
