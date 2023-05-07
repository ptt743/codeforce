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
	long long n,m;
  cin>>n>>m;
  long long xc,yc;
  cin>>xc>>yc;
  int k;
  cin>>k;
  long long ans = 0;
  for(int i=0;i<k;i++){
    long long x, y;
    cin>> x>>y;
    long long l =0, r = sqrt(n*n + m*m);
    while(l<=r){
      long long mid = (l+r)/2;
      if((xc+ mid*x<=n && xc + mid*x>0) && (yc+ mid*y<=m && yc+ mid*y>0)) l = mid+1;
      else r =mid-1;
    }
    xc+= r*x; yc+=r*y;
    ans+=r;
  }
  cout<<ans<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
