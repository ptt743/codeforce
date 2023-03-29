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
  int n, k;
  string s;
  cin>>n>>k;
  cin>> s;
  int left = 0,  right = k-1;
  int countw=0;
  for(int i= 0 ;i<=right;i++) if(s[i]=='W') countw++;
  int result = countw;
  while(right< n){
    right++;
    if(right<n){
    if(s[right]=='W') countw++;
    if(s[left]=='W') countw--;
    left++;
    result = min(result, countw);
    }
  }
  cout<<result<<endl;
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
