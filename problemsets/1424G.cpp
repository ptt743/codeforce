#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<map>
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
  map<long long, long long> mp;
  for(int i =0;i<n;i++){
    long long x,y;
    cin>>x>>y;
    mp[x]++;
    mp[y]--;
  }
  int cur=0;
  long long result;
  int sum =0;
  for(auto it : mp){
    cur+= it.second;
    if(cur> sum){
    sum = cur;
    result = it.first;}
  }
  cout<<result<<" "<<sum<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
