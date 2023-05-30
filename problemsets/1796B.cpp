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
  string a,b;
  cin>> a;
  cin>> b;
  int n  = a.size();
  int m = b.size();
  if(a[0]==b[0]){
    cout<<"YES"<<endl;
    cout<<a[0]<<"*"<<endl;
    return;
  }
  if(a[n-1]== b[m-1]) {
    cout<< "YES"<<endl;
    cout<<"*"<<b[m-1]<<endl;
    return;
  }
  for(int i =0;i<n-1;i++){
    string temp = a.substr(i,2);
    if(b.find(temp)!= string::npos){
      cout<< "YES"<<endl;
      cout<<"*"<<temp<<"*"<<endl;
      return;
    }
  }
  cout<<"NO"<<endl;
 
 
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
