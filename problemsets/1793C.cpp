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
  int n ;
  cin>> n;
  vector<int> a(n);
  for( int i=0;i<n;i++) cin>> a[i];
  int l =0, r=n-1;
  int mn = 1, mx = n;
  while(l<=r){
    if(a[l]== mn ){ l++; mn++;}
    else if(a[r] == mx){ r--; mx--;}
    else if (a[l]== mx){l++; mx--;}
    else if(a[r]==mn){r--; mn++;}
    else break;
  }
  if(l>r) cout<< "-1"<<endl;
  else cout<<l+1<<" "<<r+1<<endl;
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
