#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>> n;
  unordered_map<string, int> mp;
  vector<vector<string>> a(3, vector<string>(n));
  for( int i=0;i< 3;i++){
    for( int j=0;j< n;j++){
        cin>> a[i][j];
        mp[a[i][j]]++;
    }
  }
  for(int i =0;i< 3;i++){
    int tot = 0;
    for( int j =0;j< n;j++){
      if(mp[a[i][j]]==1) tot += 3;
      if(mp[a[i][j]]==2) tot +=1;
    }
    cout<<tot<<" ";
  }
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
