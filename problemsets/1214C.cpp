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
  string s;
  cin>> s;
  stack<char> st;
  for(int i =0;i< n;i++){
    if(s[i]=='(') st.push(s[i]);
    else{
      if(st.size()>0 && st.top()=='(') st.pop();
      else st.push(s[i]);
    }
  }
  if(st.size()==0){
    cout<<"Yes"<<endl;
    return;
  }
  if(st.size()!=2) {
    cout<<"No"<<endl;
    return;
  }else{
    char second = st.top();
    st.pop();
    char first = st.top();
    st.pop();
    if(first ==')' && second =='(') {
      cout<<"Yes"<<endl;
      return;
    }
  }
  cout<<"No"<<endl;
  return;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
