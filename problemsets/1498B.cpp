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
  int w;
  cin>> n>>w;
  multiset<int> st;
  for(int i=0;i<n;i++){
    int w;
    cin>> w;
    st.insert(w);
  }
  int height = 1, width = w;
  while(!st.empty()){
    auto it = st.upper_bound(width);
    if(it!= st.begin()){
      it--;
      int val = *it;
      width-=val;
      st.erase(it);
    } else {
      width = w;
      height++;
    }
  }
  cout<<height<<endl;
  
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
