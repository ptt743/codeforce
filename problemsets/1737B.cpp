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

long long cal(long long n){
    long long left = 0, right = 2000000123;
    while(left<=right){
      long long mid = (left+ right)/2;
      if(mid*mid>n) right = mid-1;
      else left = mid+1;
    }
    return right;
}
void solve(){
	long long l,r;
  cin>> l>> r;
  long long count=0;
  long long sqrl = cal(l), sqrr = cal(r);
  if(sqrl==sqrr){
    for(int i =0;i<3;i++){
      if(sqrl*(sqrl+i)>=l && sqrl*(sqrl+i)<=r) count++;
    }
  }else{
    count+= 3*(sqrr - sqrl-1);
    for(int i =0;i<3;i++)
      if(sqrl*(sqrl+i)>=l && sqrl*(sqrl+i)<=r) count++;
    for(int i =0;i<3;i++)
      if(sqrr*(sqrr+i)>=l && sqrr*(sqrr+i)<=r) count++;
  }
  cout<<count<<endl;
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
