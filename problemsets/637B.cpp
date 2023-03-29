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
  unordered_map<string, long long> mp;
  cin>> n;
  long long sum =0;
  while(n--){
    string temp;
    cin>> temp;
    sum++;
    mp[temp]= sum;
  }
  vector<pair< long long, string>> result;
  for(auto &it: mp){
    result.push_back(make_pair(it.second, it.first));
  }
  sort(result.begin(), result.end());
  for( int i = result.size()-1;i>=0;i--){
    cout<< result[i].second<<endl;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
