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
  vector<ll> a(n);
  for( int i =0;i<n;i++)cin>> a[i];
  sort(a.begin(), a.end());
  int l = 0, r = n-1;
  ll count=0;
  while(l<r){
    ll countl=1;
    ll countr = 1;
    while(l<n-1&& l<r  && a[l + 1]== a[l]){l++; countl++;}
    while(r>0 && l<r &&a[r - 1]== a[r]) {r--; countr++;}
    if(l<r)count+= 2*(countl*countr);
    else count+= countl*(countl-1);
    l++;
    r--;
    if(l<n && n>-0&& l<r && abs(a[l]- a[r])!= abs(a[n]-a[0])) break;
  }
  cout<<count<<endl;

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
