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
  int n ;
  cin>> n;
  vector<long long> x(n), y(n);
  for(int i=0;i< n;i++) {
    cin>> x[i];
    cin>> y[i];
  }
  function<long long(vector<long long> &)> cal=[&](vector<long long> & a)->long long{
    sort(a.begin(),a.end());
    return a[a.size()/2] - a[(a.size()-1)/2]+1;
  };
  cout<<cal(x)* cal(y)<<endl;

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
