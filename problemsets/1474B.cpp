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
  int d;
  cin>> d;
  vector<int> p;
  for( int i = d+1 ; ; i++){
    int t=1;
    for( int j =2; j*j<= i; j++){
      if( i%j==0){
        t=0; break;
      }
    }
    if(t){
      p.push_back(i);
      break;
    }
  }
  for( int i  = p.back() + d;; i++){
    int t = 1;
    for( int j = 2;j*j<= i;j++){
      if( i%j==0){
        t=0;
        break;
      }
    }
    if(t){
      p.push_back(i);
      break;
    }
  }
  cout<< min(1ll* p[0] * p[1], 1ll* p[0]* p[0]* p[0])<<endl;

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
