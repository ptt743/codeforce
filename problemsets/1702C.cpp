#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,k;
  cin>>n>>k;
  vector<long long> u(n);
  map<long long, pair<int,int>> mp;
  for(int i =0;i< n;i++) {
    cin>> u[i];
    if(mp.find(u[i])==mp.end()) mp[u[i]] = make_pair(i+1, i+1);
    else mp[u[i]] = make_pair(mp[u[i]].first,i+1);
  }
  while(k--){
    long long a,b;
    cin>>a>>b;
    if(mp.find(a)==mp.end() || mp.find(b)==mp.end() || mp[b].second< mp[a].first){
      cout<<"NO"<<endl;
      continue;
    }
    cout<<"YES"<<endl;
  }
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
