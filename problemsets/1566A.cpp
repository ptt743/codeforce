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
  long long n,s;
  cin>> n>> s;
  long long l=1, r = s;
  while(l<= r){
    long long mid = ( l+ r)/2;
    if( s - mid* (n+1-(n/2 + n%2))>=0) l = mid+1;
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
