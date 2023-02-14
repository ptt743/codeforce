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
long long get(int x){
  return x*1ll*(x+1)/2;
}
void solve(){
 int k;
 long long x;
 cin>>k>>x;
 long long l =1, r = 2*k-1;
 bool over = false;
 long long res = 2*k -1;
 while( l<= r){
   long long mid = (l+r)/2;
    if(mid >= k){
      over = get(k)  + get(k-1) - get( k-1 - (mid-k) ) >= x;
    }else {
     over = get(mid)>=x ;
    }
    if(over) r= mid-1;
    else l = mid+1;
 }
 if( l> 2*k-1) cout<< 2*k-1<<endl;
 else cout<<l<<endl;
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
