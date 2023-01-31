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
  int n, m;
  cin>> n>>m;
  vector<int> mn(n+1);
  for(int i =1;i<=n;i++)mn[i] = n;
  while(m--){
    int x,  y;
    cin>>x>>y;
    if(x>y) swap(x,y);
    mn[x] = min(mn[x], y-1);
  }
  long long ans =n;
  for(int i =n-1;i>0;i--){ mn[i] = min(mn[i], mn[i+1]);}
  for( int i =1;i<=n;i++) ans+= mn[i]-i;
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
