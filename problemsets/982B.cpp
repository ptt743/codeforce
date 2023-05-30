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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/

void solve(){
	int n;
  cin>> n;
  vector<long long> w(n+1);
  priority_queue<int> qq1;
  priority_queue<int, vector<int> , greater<int>> qq;
  map<long long, int> mp;
  for(int i=1;i<=n;i++) {
    long long t;
    cin>>t;
    mp[t] = i;
    qq.push(t);
  }
  string s;
  cin>> s;
  for(int i =0;i< 2*n;i++){
    if(s[i]=='0'){
      cout<<mp[qq.top()]<<" ";
      qq1.push(qq.top());
      qq.pop();
    } else {
      cout<<mp[qq1.top()]<<" ";
      qq1.pop();
    }
  }
  cout<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
