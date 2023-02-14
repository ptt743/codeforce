#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include <numeric>
#include <iterator>
#include <functional>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  long long n, a, b;
  cin>> n>> a>>b;
  vector<long long> x(n+1), sum(n+1);
  for( int i =1;i<=n;i++) cin>> x[i];
  long long result = 1e18 + 8;
  x[0]=0;
  partial_sum(x.begin(), x.end(), sum.begin());
  for( int i =0;i<=n;i++){
    result = min(result, (a+b)*(x[i]-x[0]) + b*(sum[n]- sum[i] - (n-i)* x[i]));
  }
  cout<< result<<endl;
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
