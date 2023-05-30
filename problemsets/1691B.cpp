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
  vector<long long> s(n);
  vector<int> result(n);
  for( int i =0;i< n;i++){
    cin>>s[i];
    result[i] = i+1;
  }
  int left = 0, right = 1;
  for(; left<n; left++){
    right = left+1;
    if(right< n && s[left]== s[right]) swap(result[left], result[right]);
  }
  for(int i =0;i< n;i++){ if(result[i]==i+1){
    cout<<"-1"<<endl;
    return;
  }}
  for(int i=0;i< n;i++) cout<< result[i]<<" ";
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
