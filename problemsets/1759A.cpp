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
  int length = n/3+2;
  string templ = "";
  for(int i =0;i< length;i++) templ +="Yes";
  int len = templ.size();
  for(int i =0;i+n<=len;i++){
    if(templ.substr(i,n)==s){ cout<<"Yes"<<endl;return;}
  }
  cout<<"No"<<endl;
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
