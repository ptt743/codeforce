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
	int n, q;
  cin>> n>> q;
  vector<long long> a(n+1);
  set<int> st;
  for(int i =1;i<=n;i++){
    cin>> a[i];
    if(a[i]>9) st.insert(i);
  }
  while(q--){
    int t;
    cin>> t;
    if(t==2){
      int x;
      cin>> x;
      cout<< a[x]<<endl;
    } else {
      int l , r;
      cin>> l>> r;
      int leftest = l;
      while(!st.empty()){
        auto it = st.lower_bound(leftest);
        if(it == st.end()) break;
        if(*it>r) break;
        long long value = a[*it];
        long long newval = 0;
        while(value>0){
          newval+= value%10;
          value/=10;
        }
        a[*it]= newval;
        leftest= *it +1;
        if(newval<=9)st.erase(it);
      }
  }
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
