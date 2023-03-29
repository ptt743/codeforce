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
  int n, m;
  cin>>n>>m;
  vector<long long> ra(m);
  for( int i =0;i< m;i++) cin>> ra[i];
  int recent = n-1;
  int timer = 0;
  unordered_map<long long , bool> mp;
  vector<long long> result(n,-1);
  for( int i =0;recent>=0&&i< m;i++){
    timer++;
    if(mp[ra[i]]) continue;
    else {result[recent--]= timer; mp[ra[i]] = true;};
    
  }
  for( int i=0;i<n;i++) cout<< result[i]<<" ";
  cout<<endl;
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
