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
  int n;
  cin>> n;
  vector<int> a(n+1);
  vector<int> b(n+1);
  for(int i =1;i<=n;i++){
    cin>> a[i];
    b[i] = i;
  }
  if(n==1){
    cout<<"-1"<<endl;
    return;
  }
  for(int i =1;i<n;i++){
    if(a[i]== b[i]) swap(b[i], b[i+1]);
  }
  if(a[n]== b[n]) swap(b[n], b[n-1]);
  for(int i =1;i<=n;i++) cout<< b[i]<<" ";
  cout<<endl;
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
