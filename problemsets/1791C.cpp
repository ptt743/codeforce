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
  int n ;
  string s;
  cin>> n;
  cin>> s;
  int left =0, right = n-1;
  while(s[left]!= s[right] && left< right){
    left++;
    right--;
  }
  cout<< right -  left+1<<endl;
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
