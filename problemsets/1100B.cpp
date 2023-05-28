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
#include<map>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n,m;
  cin>> n>>m;
  vector<int> a(m);
  vector<int> b(n+1);
  int dis =0;
  map<int, int> mp;
  set<int> st;
  string result = "";
  for(int i=0;i< m;i++) {
    cin>> a[i];
    if(b[a[i]]==0) dis++;
    b[a[i]]++;
    if(dis ==n){
      result+='1';
      for(int i =1;i<=n;i++){
        b[i]--;
        if(b[i]==0) dis--;
      }
    } else result+='0';
  }
  cout<<result<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
