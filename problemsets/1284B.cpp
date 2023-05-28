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
  cin>> n;
  long long ans = 0;
  int count=n;
  vector<long long> mins;
  vector<long long> maxs;
  for(int i =0;i< n;i++){
    int l;
    cin>>l;
    long long min_val = 1e9;
    long long max_val = -1e9;
    bool flag = false;
    for( int j = 0;j< l;j++){
      long long temp;
      cin>> temp;
      if(!flag && temp> min_val){
        ans+= 2ll*count-1;
        count--;
        flag = true;
        //break;
      }
      min_val = min(min_val, temp);
      max_val  = max(max_val, temp);
    }
    if(!flag){
      mins.push_back(min_val);
      maxs.push_back(max_val);
    }
  }
  sort(maxs.begin(), maxs.end());
  for(long long item:mins){
    auto it = upper_bound(maxs.begin(), maxs.end(),item);
    if(it ==maxs.end()) continue;
    ans+= maxs.end()- it;
  }
  cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
