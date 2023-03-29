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
  cin>> n;
  vector<int> p(n);
  for(int i =0;i< n; i++) cin>> p[i];
  int temp =0;
  int ans=0;
  for(int i =0;i< n;i++){
    temp= max(temp, p[i]);
    if(temp>p[i]){
      ans++;
      temp=0;

    }
  }
  cout<<ans<<endl;
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
