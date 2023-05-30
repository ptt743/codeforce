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
	string s;
  cin>> s;
  int n  = s.size();
  int sum =0;
  string s_temp = s+s;
  long long left = 0, right =0;
  long long length = 0;
  for(int i =0;i< s_temp.size();i++){
    if(s_temp[i]=='0'){
      left=i;
      right=i;
    } else {
      right++;
    }
    length = max(length, right- left);
  }
  if(length> n){
    cout<<(long long)n*n<<endl;
    return;
  }
  long long result =  ((length+1)/2)*((length+2)/2);
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
