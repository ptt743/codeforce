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
  cin>>n>>k;
  vector<long long> a(n);
  multiset<long long> st;
  for(int i =0;i< n;i++) {
    cin>>a[i];
    a[i] = a[i]%k;
    if(a[i]!=0)st.insert(a[i]);
  }
  int count = 0;
  if(st.size()==0) {cout<<"0"<<endl; return;}
  while(st.size()>0){
    count++;
    auto it = st.find(k - count%k);
    if(it!=st.end()) st.erase(it);
  }
  count++;
  cout<<count<<endl;
}

void solve2(){
  int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (auto &it : a) cin >> it;
	map<int, int> cnt;
	int mx = 0;
	for (auto &it : a) {
		if (it % k == 0) continue;
		++cnt[k - it % k];
		mx = max(mx, cnt[k - it % k]);
	}
	long long ans = 0;
	for (auto [key, value] : cnt) {
		if (value == mx) {
			ans = k * 1ll * (value - 1) + key + 1;
		}
	}
	cout << ans << endl;
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
