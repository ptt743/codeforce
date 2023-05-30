#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
using namespace std;
//*****taipt*****//

const int N = 1e5+5;
int n, ans[N];

void RC(int r){
  if(r<0) return;
  int s = sqrt(2*r);
  int l  = s*s - r;
  RC(l-1);
  for(;l<=r;l++,r--){
    ans[r] = l;
    ans[l] = r;
  }
}
void solve(){
  int n;
  cin>> n;
  RC(n-1);
  for(int i =0;i< n;i++) cout<<ans[i]<<" ";
  cout<<endl;


}
 
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
