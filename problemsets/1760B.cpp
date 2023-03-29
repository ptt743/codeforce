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
  string s;
  cin>> n;
  cin>> s;
  vector<bool> chars(26, true);
  int result=1;
  for( int i =0;i< n;i++){if(chars[s[i] -'a']) result = max(result, s[i]-'a'+1);}
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
