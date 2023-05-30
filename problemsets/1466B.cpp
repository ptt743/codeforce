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
  int n ;
  cin>> n;
  vector<int> a(n);
  set<int> st;
  int count=0;
  for(int i =0;i< n;i++){
    cin>> a[i];
  }
  for(int i =1;i< n;){
    while(i<n-1 && a[i]==a[i+1]) i++;
    if(a[i]- a[i-1] ==0) a[i]++;
    i++;
  }
  for(int i=0;i<n;i++){
    if(st.find(a[i])==st.end()){st.insert(a[i]); count++;}
  }
  cout<<count<<endl;
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
