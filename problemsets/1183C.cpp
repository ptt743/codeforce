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
	long long k,n,a,b;
  cin>> k>>n>>a>>b;
  int left = 0, right = n;
  while(left<=right){
    long long mid = (left+ right)/2;
    if(a*(mid) + b*(n-mid)<k) left = mid+1;
    else right = mid-1;
  }
  cout<<right<<endl;
  
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
