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
  int n ;
  cin>> n;
  string s;
  cin>> s;
  string temp = "";
  for(int i =1;i<=100;i++){
    if(i%3==0) temp+= 'F';
    if(i%5==0) temp+='B';
  }
  if(temp.find(s)!= string::npos){
    cout<<"YES"<<endl;
  } else cout<<"NO"<<endl;
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
