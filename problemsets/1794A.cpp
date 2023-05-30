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
  vector<pair<int,string>> strs;
  for( int i=0;i< 2*n-2;i++){
    string temp;
    cin>> temp;
    strs.push_back(make_pair(temp.size(), temp));
  }
  sort(strs.begin(), strs.end());
  bool flag = true;
  for(int i =0;i< 2*n-2;){
    string temp = strs[i+1].second;
    reverse(temp.begin(), temp.end());
    if(strs[i].second != temp){
        flag = false;
        break;
        }
    i+=2;
  }
  if(flag) cout<<"YES"<<endl;
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
