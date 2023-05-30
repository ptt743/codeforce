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
  long long left=-2e9, right = 2e9;
  while(n--){
    string s;
    long long v;
    char c;
    cin>> s>> v>> c;
    long long temp =0;
    if(s==">" || s==">="){
      if(c=='Y'){
        temp = (s==">")?v+1:v;
        left = max(left,temp);
      } else {
        temp = (s==">")?v:v-1;
        right = min(right,temp);
      }
    } else if (s=="<" || s=="<="){
      if(c=='Y'){
        temp = (s=="<")?v-1:v;
        right = min(right,temp);
      }else {
        temp = (s=="<")?v:v+1;
        left = max(left,temp);
      }
    }
    if(left>right){
      cout<<"impossible"<<endl;
      return;
    }
  }
  cout<<(left+ right)/2<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
