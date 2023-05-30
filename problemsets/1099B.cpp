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
	long long n;
  cin>> n;
  long long target = n;
  long long left = 0, right = 31623;
  while(left<= right){
    long long mid= (left+ right)/2;
    if(mid*(mid+1)>=target) right = mid-1;
    else left = mid+1;
  }
  int bonus = 0;
  if(left*(left+1)- left +1> target ) bonus=-1;
  cout<<1 + 2*left + bonus<<endl;
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
