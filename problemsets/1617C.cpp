#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>>n;
  vector<int> a;
  set<int> st;
  for( int i =1;i<=n ;i++){
    st.insert(i);
  }
  for( int i=0;i< n;i++){
    int tl;
    cin>>tl;
    if(st.find(tl)!= st.end()){
      st.erase(tl);
    } else {
      a.push_back(tl);
    }
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  int pt = 0;
  bool err = false;
  for(auto &nx: a){
    auto it = st.end();
    it--;
    int ctg = (*it);
    if( ctg > (nx-1)/2 ) { err = true; break;}
    st.erase(it);
  }
  if( err) cout<<"-1"<<endl;
  else cout<< a.size()<<endl;
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
