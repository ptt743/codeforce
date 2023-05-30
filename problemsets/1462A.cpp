#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>>n;
  vector<int> chars(n);
  for(int i =0;i<n;i++) cin>> chars[i];
  int l=0, r=n-1;
  vector<int> char2(n);
  int count=0;
  while(count<n){
    char2[count++]= chars[l++];
    if(count<n)char2[count++]= chars[r--];
  }
  for(int i: char2) cout<<i<<" ";
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
