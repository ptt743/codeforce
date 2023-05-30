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
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  multiset<long long> st;
  for(int i =0;i< n;i++){
    auto pos = st.find(a[i]-1);
    if(pos==st.end()) st.insert(a[i]);
    else {
      st.erase(pos);
      st.insert(a[i]);
    }
  }
  cout<<st.size()<<endl;
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
