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
	int n ;
  cin>> n;
  vector<pair<int, int>> nums;
  set<pair<int,int>> st;
  for(int i =0;i< n;i++){
    int x,y;
    cin>> x>>y;
    nums.push_back(make_pair(x,y));
    st.insert(make_pair(x*2,y*2));
  }
  int ans=0;
  for(int i =0;i< n-1;i++){
    for(int j =i+1;j<n;j++){
      int x = nums[i].first+nums[j].first;
      int y = nums[i].second+ nums[j].second;
      if(st.find(make_pair(x,y))!=st.end())ans++;
    }
  }
  cout<<ans<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
