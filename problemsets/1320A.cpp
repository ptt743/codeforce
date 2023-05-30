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
	int n,k;
  cin>> n>>k;
  vector<int> a(n);
  set<int>s;
  for(int i =0;i< n;i++){
    int temp;
    cin>> temp;
    s.insert(temp);
  }
  if (s.size()>k){
    cout<<-1<<endl;
    return;
  }
  cout<<n*k<<endl;
  for (int i=0;i<n;i++){
    for (int b:s)
      cout<<b<<' ';
    for (int j=0;j<k-(int)s.size();j++)
      cout<<1<<' ';
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
