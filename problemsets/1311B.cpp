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
	int n, m;
  cin>> n>>m;
  vector<int> a(n+1);
  set<int> st;
  for(int i =1;i<= n;i++) cin>> a[i];
  for(int i =0;i< m;i++){
    int t; cin>> t;
    st.insert(t);
  }
  for(int i =n-1;i>0;i--){
    int temp = i;
    while(temp< n && a[temp]> a[temp+1]){
      if(st.find(temp)!=st.end()){
        swap(a[temp],a[temp+1]);
        temp++;
      } else {
        cout<<"NO"<<endl;
        return;
      }
    }

  }
  cout<<"YES"<<endl;
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
