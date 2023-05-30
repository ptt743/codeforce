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
  vector<long long> a, pos,neg;
  for( int i=0;i<n;i++){
    int x;
    cin>> x;
    if(x>0) pos.push_back(x);
    else if( x<0) neg.push_back(x);
    else if(a.size()<2) a.push_back(x);
  }
  if(pos.size()>2 || neg.size()>2){
      cout<<"NO"<<endl;
      return;
    }
  for(int i : pos) a.push_back(i);
  for( int j : neg)a.push_back(j);
  
  for(int i =0;i<a.size();i++){
    for(int j = i+1; j< a.size();j++){
      for(int k = j+1;k<a.size();k++){
        bool ok  = false;
        for( int l = 0;l< a.size();l++){
          if(a[i]+a[j]+a[k]==a[l]) ok  = true;
        }
        if(!ok){
          cout<<"NO"<<endl;
          return;
        }
      }
    }
  }
  cout<<"YES"<<endl;
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
