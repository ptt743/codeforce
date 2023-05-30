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
	int n,m;
  cin>> n>>m;
  vector<vector<int>> num(n,vector<int>(m,0));
  for(int i =0;i<n;i++){
    for(int j =0;j<m;j++){
      cin>>num[i][j];
    }
  }
  set<int> st;
  for(int i =2;i<= 1e5+15;i++){
    int temp = 2;
    bool flag = false;
    while(temp<=sqrt(i)){
      if(i%temp==0) {flag = true;break;}
      temp++;
    }
    if(!flag)st.insert(i);
  }
  int min_val= INT_MAX;
  for(int i=0;i<n;i++){
    int row =0;
    for( int j =0;j< m;j++){
      int next = *st.lower_bound(num[i][j]);
      row += next - num[i][j];
    }
    min_val = min(min_val,row);
  }
  for(int i =0;i< m;i++){
    int col =0;
    for( int j=0;j<n;j++){
      int next = *st.lower_bound(num[j][i]);
      col+= next - num[j][i];
    }
    min_val = min(min_val, col);
  }
  cout<<min_val<<endl;
  
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
