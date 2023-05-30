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
  cin>>n;
  string s;
  cin>> s;
  unordered_map<char,bool> mp;
  long long  result = 0;
  for(int i=0;i<n;i++){
    if(mp[s[i]]==false){
      result+=2;
      mp[s[i]]= true;
    }else result+=1;
  }
  cout<<result<<endl;
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
