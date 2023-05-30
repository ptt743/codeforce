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
	int n,k;
  cin>> n>>k;
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>>a[i];
  string s;
  cin>> s;
  int l =0;
  long long result = 0;
  priority_queue<long long> qq;
  for(int r =0;r<=n;r++){
    if(r==n || s[r]!=s[l]){
      int temp = min(k, r-l);
      for(int i =0;i< temp;i++){
      result+=qq.top();
      qq.pop();
      }
      while(!qq.empty())qq.pop();
      l = r;
      if(r==n) break;
      qq.push(a[r]);
    } else {
      qq.push(a[r]);
    }
  }
  cout<<result<<endl;

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
