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
	int n,k,x;
  cin>> n>>k>>x;
  vector<int> a(n);
  for(int i =0;i<n;i++) cin>> a[i];
  map<int, pair<int,int>> mp1;
  map<int,pair<int, int>> mp2;
  int left = 0;
  for(int right  = 0; right<=n; right++){
    if(right==n || a[right]!=a[left]){
      mp1[right-1] = make_pair(left, a[left]);
      mp2[left] = make_pair(right-1, a[left]);
      left = right;
    }
  }
  int ans = 0;
  for(int i =0;i< n;i++){
    if(a[i]==x){
      int count = mp2[i].first - i+2;
      if(count>=3){
        int right = mp2[i].first+1;
        int left = i-1;
        while(left>0 && right< n){
          if((mp1[left].second!= mp2[right].second)) break;
          int temp = left - mp1[left].first+1 + mp2[right].first - right+1;
          if(temp<3) break;
          count+=temp;
          left = mp1[left].first-1;
          right = mp2[right].first+1;
        }
      }
      i = mp2[i].first;
      ans = max(ans, count);
    }
  }
  ans = (ans<3)?0:ans-1;
  cout<< ans<<endl;
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
