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
	int n,m;
  cin>> n>> m;
  vector<vector<char>> a(n, vector<char>(m));
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++){
      cin>> a[i][j];
    }
  }
  for(int i =n-1;i>=0;i--){
    for(int j =0;j< m;j++){
      if(a[i][j]=='*'){
        int t = i+1;
        while(t<n && a[t][j]=='.') t++;
        if(a[t-1][j]=='.'){
          a[t-1][j]='*';
          a[i][j]='.';
        }
      }
    }
  }
  for(int i =0;i< n;i++){
    for(int j =0;j< m;j++) cout<< a[i][j];
    cout<<endl;
  }
  cout<< endl;
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
