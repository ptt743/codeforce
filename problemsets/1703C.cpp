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
  vector<int> a(n+1);
  for(int i =1;i<=n;i++) cin>> a[i];
  for(int i =1;i<=n;i++){
    int t; 
    string s;
    cin>> t>> s;
    for(char item: s){
      if(item=='D') a[i]+=1;
      else a[i]-=1;
      if(a[i]<0) a[i] = 9;
      a[i]%=10;
    }
  }
  for(int i =1;i<=n;i++) cout<<a[i]<<" ";
  cout<<endl;
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
