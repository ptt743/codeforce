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
  int n  = s.size();
  int temp = 10;
  for(int i=0;i< n;i++){
    if((s[i]-'0')<temp) temp = s[i]-'0';
  }
  if(n==2 && s[0]==temp+'0'){
    cout<<s[1]<<endl;
    return;
  }
  cout<<temp<<endl;

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
