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
  int n,q;
  cin>> n>>q;
  vector<long long> a(n);
  vector<long long> prefix(n+1);
  for( int i=0;i<n;i++) cin>> a[i];
  sort(a.rbegin(),a.rend());
  for( int i=1;i<=n;i++) prefix[i] = prefix[i-1]+ a[i-1];
  for( int i=0;i<q;i++){
        long long k;
        cin>> k;
        int result=INT_MAX;
        int left = 1;
        int right = n;
        while( left<= right){
          int mid = (left+ right)/2;
          if(prefix[mid]>=k) right=mid-1;
          else left=mid+1;
        }
        if(left<=n&&prefix[left]>=k && left<result) result = left;
        if(result==INT_MAX) cout<<"-1"<<endl;
        else cout<< result<<endl;
  }
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
