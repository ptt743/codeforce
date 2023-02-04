#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<map>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  int n;
  cin>>n;
  vector<int> arr(n);
  vector<pair<int,int>> a(n);
  for(int i =0;i<n;i++){
    cin>>arr[i];
    a[i].first = arr[i];
    a[i].second = i;
  }
  sort(a.begin(), a.end());
  int index =0, count=0;
  bool flag = false;
  map<int,int> result_a, result_b;
  stack<int> st;
  map<int, bool> mp;
  for(int i =0;i<=n;i++){
    mp[a[i].first] = true;
    if(a[i].first!=a[index].first|| i==n) {
      if( count==1) result_a[a[index].second] = a[index].first, result_b[a[index].second] = a[index].first;
      if( count==2 && !st.empty()){
        result_a[a[index].second] = a[index].first; 
        result_a[a[index+1].second] = st.top(); 
        result_b[a[index].second] = st.top(); 
        result_b[a[index+1].second] = a[index].first; 
        st.pop();
      }
      else if(count==2){ cout<<"hiiiii"<<endl; flag = true; break;}
      if( count>=3){ flag = true; break;}
      index= i; count=1;}
    else count++;
    if(i+1< a[i].first && mp[i+1]==false){ st.push(i+1);}
  }
  if(flag) cout<<"NO"<<endl;
  else {
  	cout<<"YES"<<endl;
	for( int i =0;i< n;i++) cout<<result_a[i]<<" ";
	cout<<endl;
	for( int i =0;i< n;i++) cout<<result_b[i]<<" ";
	cout<<endl;
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
