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
  vector<long long> a(n);
  int count = 0;
  long long min_val= 1e9;
  long long sum=0;
  for(int i =0;i< n;i++){
    cin>> a[i];
    if(a[i]<0) count++;
    if(abs(a[i])< min_val) min_val = abs(a[i]);
    sum+= abs(a[i]);
  }
  if(count%2!=0) sum-= min_val*2;
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
