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
  cin>>n;
  vector<int> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  int ans = 0;
  int mn=0, mx = 0;
  int diff = 0;
  multiset<int> st;
  int j =0;
  for(int i =0;i< n;i++){
    st.insert(a[i]);
    mn = (*st.begin());
    mx = (*st.rbegin());
    diff = mx - mn;
    while(diff>1){
      st.erase(st.find(a[j]));
      mn = (*st.begin());
      mx = (*st.rbegin());
      diff = mx - mn;
      j++;
    }
    ans = max(ans, (int)st.size());
  }
  cout<<ans<<endl;
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
