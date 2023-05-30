#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<unordered_set>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n ;
  cin>> n;
  vector<int> a(n);
  for(int i =0;i< n;i++){
    cin>> a[i];
  }
  sort(a.begin(), a.end());
  unordered_set<int> st;
  unordered_map<int,int> mp;
  for(int i =0;i<n;i++){
    st.insert(a[i]);
    mp[a[i]]++;
  }
  vector<int> b(n+1);
  for(int i =1;i<=n;i++) b[i] = b[i-1]+a[i-1];
  int nd = st.size();
  int l=1, r=n/2+1;
  while(l<=r){
    int mid = (l+r)/2;
    int i =1, j = mid;
    bool flag = false;
    while(j<=n){
      if(b[j]- b[i-1]== mid* a[j-1]){ flag = true; break;}
      j++;
      i++;
    }
    int temp =nd; 
    if(flag == true && mp[a[j-1]]==mid) temp--; 
    if(temp<mid)flag = false;
    if(flag) l = mid+1;
    else r = mid-1;
  }
  cout<<r<<endl;

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
