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
	int n,m;
  cin>>n>>m;
  int left =0, right=n+1;
  int a;
  while(m--){
    string s,p;
    cin>>s>>s>>p>>s>>a;
    if(p=="left"){
      right = min(right,a);
    }
    if(p=="right"){
      left = max(left,a);
    }

  }
  if(right- left-1 <=0){
    cout<<"-1"<<endl;
    return;
  }
  cout<<(right- left-1)<<endl;

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
