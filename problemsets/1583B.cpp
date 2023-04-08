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
  set<int> st;
  int a,b,c;
  while(m--){
       cin>> a>> b>>c;
       st.insert(b);
  }
  int middle = -1;
  for(int i =1;i<=n;i++){
    if(st.find(i)==st.end()){
      middle = i;
      break;
    }
  }
  for( int i =1;i<=n ;i++){
    if(i==middle)continue;
    cout<<middle<<" "<< i<<endl;
  }
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
