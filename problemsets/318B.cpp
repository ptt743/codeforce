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
  int count = 0;
  int result = 0;
  for(int i =0;i< n;i++){
    string temp =s.substr(i,5);
    if(temp=="heavy") count++;
    if(temp=="metal") result+= count;
  }
  cout<<result<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
