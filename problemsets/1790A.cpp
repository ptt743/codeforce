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
void solve(){
  string s;
  cin>> s;
  string pi = "314159265358979323846264338327";
  int count =0;
  for(int i =0;i< s.size();i++){
    if(s[i]==pi[i]) count++;
    else break;
  }
  cout<<count<<endl;
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
