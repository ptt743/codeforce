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
const int m=1000000007;

void solve(){
  int n,x,p; cin>>n>>x>>p;
  int y=x-1,c=n-x,l=0,d=0,a=1;
  while(l<n){
    if(p<(d=l+n>>1))a=c--*1ll*a%m,n=d;
    else p==d?0:a=y--*1ll*a%m,l=d+1;
    cout<< "d"<<d<<" l "<<l<<endl;
  }
  c+=y; while(c>0)a=c--*1ll*a%m;
  cout<<a<<endl;
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
