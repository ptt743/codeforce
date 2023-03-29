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
  int n ;
  cin>> n;
  vector< long long> a(n);
  vector<long long> ml(n), mr(n);
  for(int i =0;i< n;i++){
    cin>> a[i];
    ml[i] = a[i];
    mr[i] = a[i];
  }
  for(int i =1;i< n;i++) ml[i] = max(ml[i], ml[i-1]);
  for( int i = n-2;i>=0;i--) mr[i] = max(mr[i], mr[i+1]);
  for(int i =0;i< n;i++){
    if(i==0)
      cout<< a[0] - mr[1]<<" ";
    else if(i==n-1)
      cout<< a[n-1] - ml[n-2]<<" ";
    else cout<< a[i] - max(ml[i-1], mr[i+1])<<" ";
  }
  cout<<endl;


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
