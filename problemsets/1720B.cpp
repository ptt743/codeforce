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
  vector<long long> a(n);
  for( int i =0;i<n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  cout<< a[n-1]+ a[n-2]- a[0]- a[1]<<endl;
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
