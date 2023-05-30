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
	int n,k;
  cin>> n>>k;
  vector<double> a(n+1);
  vector<double> sum(n+1);
  for(int i =1;i<=n;i++) cin>> a[i];
  double weeks = n-k+1;
  for(int i =1;i<= n;i++) sum[i] = sum[i-1]+ a[i];
  double ans = 0;
  for(int i = k;i<=n;i++ ) ans+= sum[i] - sum[i-k];
  printf("%.10f\n", ans/weeks);

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
