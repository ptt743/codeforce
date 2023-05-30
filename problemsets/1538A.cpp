#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>> n;
  vector<int> a(n);
  int mi =INT_MAX;
  int ma = INT_MIN;
  int index_min=0, index_max=0;
  for( int i =0;i< n;i++){
    cin>> a[i];
    if(a[i]> ma){ index_max= i; ma = a[i];}
    if(a[i]< mi){ index_min = i; mi = a[i];}
  }
  int l = min(index_min, index_max);
  int r = max(index_min, index_max);
  int result = min(l+1+ n-r, min(r+1, n-l));
  cout<< result<<endl;
  
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
