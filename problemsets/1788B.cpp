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
long long RC(int n , bool t){
  if(n%10==9){
    return RC(n/10, !t)*10 + t+ 4;
  }
  return n/2;
}
void solve(){
  long long n ;
  cin>> n;
  long long x = n/2;
  if(n%10==9){
   x = RC(n,1);
  }
  cout<< x << " "<<n-x<<endl;
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
