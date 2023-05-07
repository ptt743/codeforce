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
 stack<char> st;
 int count=0;
 for(int i =0;i< n;i++){
    if(st.size()>0 && st.top()==s[i]){
      count++;
      st.pop();
    }
    else st.push(s[i]);
 }
  if(count%2==0) cout<<"No"<<endl;
  else cout<<"Yes"<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
