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
  cin>>n;
  vector<int> a(n);
  for( int i =0;i< n;i++) cin>>a[i];
  int count=0;
  int min_val = INT_MAX;
  for(int i =n-1;i>=0;i--){
    min_val = min(a[i],min_val);
    if(a[i]>min_val) count++;
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
