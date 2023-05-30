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
#include<bitset>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
const int MAXN = 1000005;



void solve(){
	int n;
  cin>> n;
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>>a[i];
  if(n==1 && a[0]==1) {cout<<"YES"<<endl; return;}
  else if (n==1) { cout<<"NO"<<endl; return;}
  sort(a.begin(), a.end());
  int count = n-1;
  bitset<MAXN> dp;
  dp[1] = true;
  for (int i = 1; i < n; i++) {
    dp |= (dp << a[i]);
  }
  for(int i =n-1;i>=1;i--){
    if(!dp[a[i]]) break;
    count--;
  }
  if(count==0 && a[0]==1) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
