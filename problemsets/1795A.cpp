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
 int n,m;
 cin>> n>>m;
 string s,t;
 cin>> s;
 cin>> t;
reverse(t.begin(), t.end());
  string temp = s+t;
  int count =0;
  for(int i =1;i< n+m;i++){
    if( temp[i] == temp[i-1]) count++;
  }
  if(count<=1) cout<< "YES"<<endl;
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
