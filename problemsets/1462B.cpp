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
  cin>>s;
  if(s=="2020"){
    cout<<"YES"<<endl;
    return;
  }
  int l=0, r=0;
  string target = "2020";
  for(int i =0;i< n;i++){
    if(i<4 && s[i] ==target[i])l++;
    else break;
  }
  int index = 3;
  for(int i  = n-1;i>=0;i--){
    if(index>=0 &&s[i]==target[index--]) r++;
    else break;
  }
  if(l+r>=4) cout<<"YES"<<endl;
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
