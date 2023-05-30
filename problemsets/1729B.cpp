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
  string s;
  cin>> s;
  string result = "";
  for(int i =n-1;i>=0;){
    if(s[i]=='0'){
      string temp = s.substr(i-2,2);
      result=(char)((stoi(temp)-1) + 'a') + result;
      i-=3;
      
    }else{
      result = (char)(((s[i]-'0')-1) + 'a') + result;
      i--;
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
