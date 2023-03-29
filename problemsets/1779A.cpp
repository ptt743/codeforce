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
  int n;
  cin>>n;
  string s;
  cin>> s;
  bool flag = false;
  int index = -1;
  for(int i =1;i<n;i++){
    if(s[i]=='L'&& s[i-1]=='R') flag = true;
    if(s[i]=='R'&& s[i-1]=='L') index = i-1;
  }
  if(flag){cout<<"0"<<endl;}
  else if( index!=-1){cout<<index+1<<endl;}
  else {cout<<"-1"<<endl;}
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
