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
  long long a,b;
  cin>> a>> b;
  long long l = 0, r = min(a,b);
  long long sum = a+b;
  while(l<=r){
    long long mid = (l+ r)/2;
    if( (sum- mid*2)>= 2*mid) l = mid+1;
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
