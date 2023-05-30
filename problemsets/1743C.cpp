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
  string s;
  cin>> s;
  vector<int> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  long long sum =0;
  for(int i =n-1;i>=0;i--){
    int min_val = INT_MAX;
    while(s[i]=='1'){
      sum+=a[i];
      min_val = min(min_val,a[i]);
      i--;
    }
    if(i>=0 && a[i]>min_val) sum = sum + a[i] - min_val; 
  }
  cout<<sum<<endl;
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
