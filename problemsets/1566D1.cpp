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
struct info{
  long long val;
  int ind;
  int s;
};
bool option1(info a, info b){
  return (a.val< b.val) || (a.val==b.val && a.ind>b.ind );
}
bool option2(info a, info b){
  return a.ind< b.ind;
}
void solve(){
	int n, m;
  cin>> n>>m;
  vector<info> a(m);
  for(int i=0;i<m;i++){
    info temp;
    cin>> temp.val;
    temp.ind = i;
    a[i] = temp;
  }
  sort(a.begin(), a.end(),option1);
  for(int i =0;i< m;i++){
    a[i].s = i;
  }
  sort(a.begin(),a.end(),option2);
  set<int> st;
  int ans = 0;
  for(int i =0;i< m;i++){
    
    auto it = st.upper_bound(a[i].s);
    if(it==st.end()){
      ans+=st.size();
    } else{
      ans += distance(st.begin(),it);
    }
    st.insert(a[i].s);
  }
  cout<<ans<<endl;

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
