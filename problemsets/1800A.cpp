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
  string s;
  cin>> s;
  string meow = "meow";
  int index=0;
  bool flag = true;
  for(int i =0;i< n;i++){
    if((s[i]=='m'|| s[i]=='M') && index<=0) continue;
    else if ( (s[i]=='e' || s[i]=='E')&& (index == 0 || index==1)){
      if(index==0) index++;
      continue;
    }
    else if ( (s[i]=='o'|| s[i]=='O')&& ( index==1 || index ==2)){
      if(index==1) index++;
      continue;
    }
    else if ((s[i]=='w'|| s[i]=='W')&&( index==2 || index ==3)){
      if(index==2) index++;
      continue;
    }
    else {
      flag = false;
      break;
    }
  }
  if(s[0]!='M' && s[0]!='m') flag = false;
  if(s[n-1]!='W' && s[n-1]!='w') flag = false;
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
