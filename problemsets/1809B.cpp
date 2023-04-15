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
  long long l =-1;
  long long r = 1e9;
  while(l<=r){
    long long mid = (r+l)/2;
    if(mid*mid>=n) r = mid-1;
    else l = mid+1;
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
