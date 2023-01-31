#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
bool option(char a, char b){
  return a> b;
}
void solve(){
  int n;
  cin>> n;
  string s,t;
  cin>> s >> t;
  for(int i =0;i< s.size();i++){
    if(i<n-1 && s[i]!= t[i]){
      int j=0;
      for(j = i+1; j< n && s[j]==s[i];j++);
      if(j<n && s[j]== t[i] &&  s[j]== s[i]+1) swap(s[j],s[i]);
    }
  }
  if(s==t)cout<<"YES"<<endl;
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
