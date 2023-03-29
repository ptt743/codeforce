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
  string s;
  cin>> n;
  cin>> s;
  int l=0,r=0;
  if(n%2){
    l=r = n/2;
  }else {
    l = n/2-1;
    r = n/2;
  }
  while(l>=0 && r<n){
    if(s[l]!=s[r]) break;
    l--;
    r++;
  }
  bool flag = s[l]==s[r];
  bool pre_flag = flag;
  int count=0;
  while(l>=0 && r<n){
    flag = s[l] ==s[r];
    if(pre_flag!=flag){count++;}
    l--;
    r++;
    pre_flag = flag;
  }
  if(count<=1) cout<< "YES"<<endl;
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
