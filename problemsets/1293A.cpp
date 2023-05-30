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
  long long n,s,k;
  cin>> n>> s>>k;
  unordered_map<int,bool> mp;
  long long distance = 0;
  for(int i=0;i<k;i++ ){
    long long t;
    cin>> t;
    distance = max(distance, abs(s - t)+1);
    mp[t] = true;
  }
  long long up=-1, down =-1;
  bool flag = false;
  for(long long i =s ;i>=1 && i>= s-distance;i--){
    down++;
    if(mp[i]==false){ flag = true; break;}
  }
  if(!flag) down = INT_MAX;
  flag = false;
  for(long long i =s;i<=n && i<=s + distance;i++){
    up++;
    if(mp[i]==false) {flag = true;break;}
  }
  if(!flag) up = INT_MAX;
  cout<<min(up,down)<<endl;
}

void solve2(){
  long long n,s,k;
  cin>>n>>s>>k;
  vector<long long> distance(k);
  for(int i =0;i<k;i++){
    long long t;
    cin>> t;
    distance[i] = t - s;
  }

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
