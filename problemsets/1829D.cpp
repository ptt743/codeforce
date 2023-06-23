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
	long long m,n;
  cin>> m>> n;
  std::function<bool(int, int)> dfs = [&](int s,int t)-> bool{
    if(s==t) return true;
    if(s%3!=0) return false;
    return dfs(2*s/3,t) || dfs(s/3,t);
  };
  if(dfs(m,n)) cout<<"YES"<<endl;
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
