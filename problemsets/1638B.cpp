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
	int n;
  cin>> n;
  vector<long long> a(n);
  vector<long long> b(2,0);
  bool flag = true;
  for(int i =0;i<n;i++){ 
    cin>> a[i];
    if(a[i]%2==0){
      if(b[0]>a[i]){
        flag = false;
      }else b[0] = a[i];
    } else {
      if(b[1]>a[i]){
        flag = false;
      } else b[1] = a[i];
    }
  }
  if(!flag) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
  
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
