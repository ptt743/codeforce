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
    int n,m;
    cin>>n>>m;
    vector<int> a(m+1);
    vector<int> timetowork(n);
    for( int i =1;i<=m;i++) {
      cin>> a[i];
      timetowork[a[i]-1]++;
    }
    sort(timetowork.begin(), timetowork.end());
    int l =1;
    int r = timetowork[n-1];
    while(l<=r){
      long long mid = (l+r)/2, total = 0, flag = true;
      for( int i =0;i<n;i++){
        if(mid>timetowork[i]) total+= mid - timetowork[i] - (((mid- timetowork[i])%2)?1:0);
        else total -= 2*(timetowork[i] - mid);
        if( total <0) {flag = false; break;}
        
      }
      if(flag) r = mid-1;
      else l = mid+1;
    }
    cout<<l<<endl;
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
