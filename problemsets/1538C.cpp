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
	int n;
  long long l,r;
  cin>>n>>l>>r;
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>>a[i];
  sort(a.begin(), a.end());
  ll result = 0;
  for(int i=0;i< n;i++){
    ll bottom = lower_bound(a.begin(), a.end(), l-a[i])- a.begin();
    ll top = upper_bound(a.begin(), a.end(), r - a[i])- a.begin();
    result += top - bottom;
    if(i>=bottom && i< top) result--;
  }
  cout<< result/2<<endl;
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
