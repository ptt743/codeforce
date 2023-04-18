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
  cin>> n;
  vector<int> a(n);
  vector<int> index(n,0);
  for(int i =0;i< n;i++) cin>> a[i];
  for(int i=1;i< n;i++){
    if(a[i]> a[index[i-1]]) index[i] = i;
    else index[i] = index[i-1];
  }
  stack<int>st;
  for(int i =n-1;i>=0;i--){
     st.push(a[i]);
     if(index[i]==i){
        while(!st.empty()){
          cout<< st.top()<<" ";
          st.pop();
        }
     }
  }
  cout<<endl;
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
