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
	string s,t;
  cin>> s;
  cin>> t;
  set<char> st;
  int n  = s.size();
  for(int i =0;i< t.size();i++){
    st.insert(t[i]);
  }
  if(st.find('a')!=st.end() && t.size()>1){
    cout<<"-1"<<endl;
    return;
  } else if (t.size()==1 && st.find('a')!=st.end()){
    cout<<"1"<<endl;
  }
  else cout<<(((long long) 1) << s.size())<<endl;

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
