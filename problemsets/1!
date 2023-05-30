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
#include<bitset>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
const int MAXN = 1000005;



void solve(){
	int n;
  cin>> n;
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>>a[i];
  sort(a.begin(), a.end());
  if(a[0]!=1){
    cout<<"No"<<endl;
    return;
  }
  long long sum =a[0];
  for(int i =1;i< n;i++){
    if(sum < a[i]){
      cout<<"No"<<endl;
      return;
    }
    sum += a[i];
  }
  cout<<"Yes"<<endl;
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
