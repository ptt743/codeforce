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
  vector<long long> a(n);
  for( int i =0;i<n;i++) cin>> a[i];
  int left =0, right = 0;
  int count=0;
  while(left< n){
    if( right< left) right= left;
    while(right< n && a[right]== a[left]) right++;
    if((left==0 || a[left-1] > a[left])&& (right-1==n-1 || a[right]> a[right-1]) ) count++;
    left = right;
  }
  if( count==1)cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
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
