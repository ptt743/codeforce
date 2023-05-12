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
	string s;
  cin>> s;
  int n = s.size();
  int ans = 0;
  for(int i =0;i< n;i++){
    if(s[i]=='_'){
      if(i==0) ans++;
      if(i==n-1) ans++;
      if(i>0 && s[i-1]=='_')ans++;
    } else if( s[i]=='^' && n==1) ans++;
  }
  cout<<ans<<endl;
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
