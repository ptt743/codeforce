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
bool flag;
int check(char x, string s){
  int n  = s.size();
  int l = 0,r = n-1;
  int count=0;
  while( l< r){
    if(s[l]!= s[r]){
      if(s[l]==x)l++;
      else if (s[r]==x)r--;
      else {
        return INT_MAX;
      }
    count++;
    }
    else{
      l++;
      r--;
    }
  }
  flag = true;
  return count;
}
void solve(){
	int n ;
  cin>>n ;
  string s;
  cin>> s;
  int result = 0;
  flag = true;
  for( int i=0;i< n;i++){
    if( s[i]!= s[n-1-i]){
      flag = false;
      int first = check(s[i],s);
      int second = check(s[n-1-i],s);
      if(flag) result = min(first, second); 
      break;
    }
  }
  if(!flag) result=-1;
  cout<< result<<endl;
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
