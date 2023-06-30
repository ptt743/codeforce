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
	int m,n;
  cin>> n>> m;
  string s, t;
  cin>> s;
  cin>> t;
  vector<int> a;
  int b[200001];
  int curr = 0;
  for(int i =0;i<m;i++){
    while(s[curr]!=t[i]) curr++;
    a.push_back(curr);
    curr++;
  }
  curr = n-1;
  for(int i =m-1;i>=0;i--){
    while(s[curr]!=t[i]) curr--;
    b[i] = curr;
    curr--;
  }
  int ans = 0;
  for(int i =0;i< m-1;i++){
    ans = max(ans, b[i+1]- a[i]);
  }
  cout<< ans<< endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
