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
  int n ;
  cin>> n;
  vector<pair<int,int>> a;
  for( int i =0;i<n;i++){ 
    int t; 
    cin>> t; 
    a.push_back(make_pair(t,i+1));
  }
  sort(a.begin()+1, a.end());
  reverse(a.begin()+1, a.end());
  int l=0, r=0;
  bool flag = true;
  vector<pair<int,int>> result;
  for(;l<n;l++){
    int p_r = r;
    r = r+ a[l].first;
    if(r== p_r){flag = false;break;}
    for(int j= p_r+1; j<n&& j<= p_r+a[l].first;j++){
      result.push_back(make_pair(a[l].second,a[j].second));
    }
    if(r>=n-1) break;
    
  }
  if(!flag) cout<<"-1"<<endl;
  else{
    cout<< result.size()<<endl;
    for(int i =0;i< result.size();i++) cout<< result[i].first<<" "<<result[i].second<<endl; 
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
