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
const int MOD = 1e9 + 7;
void solve(){
	int n ;
  cin>> n;
  vector<long long> a(n), b(n);
  for(int i =0;i< n;i++) cin>> a[i];
  for(int i=0;i< n;i++) cin>> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end(), greater<long long>());
  ll result = 1;
  for(int i =0;i< n;i++){
    int count =(int)a.size()- (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
    result=  result*max(count- i, 0)%MOD;    
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
