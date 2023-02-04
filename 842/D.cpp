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
  vector<int> a(n),b(n);
  for(int i =0;i<n;i++){
    cin>> a[i];
    a[i]--;
  }
  vector<int> comp(n,0);
  int ind =1, ans = 0;
  for( int i=0;i< n;i++){
    if(comp[i])continue;
    {
      int v = i;
      while(comp[v]==0){
        comp[v] = ind;
        v = p[v];
        ans++;
      }
      ans--, ind++;
    }
  }
  for(int i =0;i< n-1;i++){
    if(comp[i]== comp[i+1]){
      cout<<ans-1;
      return;
    }
  }
  cout<<ans+1;
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
