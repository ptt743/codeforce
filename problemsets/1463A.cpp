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
 * khong the tru 3 duoc, tai vi chia tung khoang
*/
void solve(){
  long long a,b,c;
  cin>> a>>b>>c;
  long long sum =0;
  sum= (a)+ (b)+ (c);
  if(sum%9==0 && sum/9<=min(a,min(b,c))){
    cout<<"YES"<<endl;
    return;
  }
  cout<<"NO"<<endl;
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
