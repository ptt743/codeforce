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
	int m;
  cin>> m;
  vector<vector<char>> a(2,vector<char>(m+1));
  int blacks = 0;
  for(int i =0;i<=1;i++){
    for(int j =1;j<=m;j++){
      cin>>a[i][j];
      if(a[i][j]=='B')blacks++;
    }
  }
  int pos =-1;
  for(int i=1;i<=m;i++){
    if(a[1][i]!=a[0][i])pos =i;
  }
  if(pos==-1){
    cout<<"YES"<<endl;
    return;
  }
  int cur = (a[1][pos]=='B')?1:0;
  for(int i = pos+1; i<=m;i++){
    if(a[cur][i]=='W'){
      cout<<"NO"<<endl;
      return;
    }
    if(a[cur^1][i]=='B') cur = cur^1;
  }
  cur = (a[1][pos]=='B')?1:0;
  for(int i =pos-1;i>0;i--){
    if(a[cur][i]=='W'){
      cout<<"NO"<<endl;
      return;
    }
    if(a[cur^1][i]=='B') cur = cur^1;
  }
  cout<<"YES"<<endl;
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
