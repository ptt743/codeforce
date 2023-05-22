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
	int n, m;
  cin>> n>>m;
  vector<int> a(n+1);
  
  for(int i=1;i<=n;i++){
    cin>> a[i];
  }
  string s(m+1,'B');
  for( int i =1;i<=n;i++){
    int index = min(a[i], m+1 -a[i]);
    if(s[index]=='B'){
      s[index] = 'A';
    } else {
      s[m+1- index] = 'A';
    }
  }
  cout<<s.substr(1)<<endl;
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
