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
  long long k;
  cin>> n>>k;
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  set<long long> st;
  bool flag = false;
  for( int i =0;i< n;i++){
    if(st.find(a[i])== st.end()) st.insert(k+a[i]);
    else {
      flag = true;
      break;
    }
  }
  if(flag) cout<<"YES"<<endl;
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
