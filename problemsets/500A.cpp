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
	int n, t;
  cin>> n >> t;
  vector<int> a(n+1);
  for(int i =1;i< n;i++) cin>> a[i];
  queue<int> qq;
  qq.push(1);
  while(!qq.empty()){
    int ind = qq.front();
    qq.pop();
    if(ind >=n) break;
    if(ind + a[ind] == t) {
      cout<<"YES"<<endl;
      return;
    }
    qq.push(ind + a[ind]);
  }
  cout<<"NO"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
      solve();
    return 0;
}
