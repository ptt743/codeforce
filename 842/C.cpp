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
  vector<int> a(n);
  for(int i =0;i<n;i++)cin>>a[i];
  sort(a.begin(), a.end());
  int index =0, count=0;
  bool flag = true;
  vector<int> result_a, result_b;
  stack<int> st;
  map<int, bool> mp;
  for(int i =0;i<n;i++){
    mp[a[i]] = true;
    if(i+1< a[index] && mp[i+1]==false) st.push(i+1);
    if(a[i]!=a[index]) {
	if( count==1) result_a.push_back(a[index]), result_b.push_back(a[index]);
	if( count==2 && !st.empty()){ 
		result_a.push_back(a[index]); 
		result_a.push_back(st.top()); 
		result_b.push_back(st.top()); 
		result_b.push_back(a[index]); 
		st.pop();
	}
	else { flag = true; break;}
	if( count>=3){ flag = true; break;}
	index= i; count=0;}
    else count++;
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
