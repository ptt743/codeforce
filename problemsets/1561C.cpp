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
  vector<pair<int,int>> a;
  for( int i =0;i< n;i++){
      int k;
     cin>> k;
     int count=0;
      int trengh = 0;
     for(int j  =0;j<k;j++){
       int t;
       cin>> t;
      trengh = max( trengh, t-count+1 );
      count++;
    }
     a.push_back(make_pair(trengh,k));  
  }
  sort(a.begin(), a.end());
  int ans=0,h=0;
  for(auto it:a){
    ans = max(ans, it.first - h );
    h+=it.second;
  }
  cout<<ans<<endl;
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
