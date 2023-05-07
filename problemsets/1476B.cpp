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
	int n, k;
  cin>>n>>k;
  vector<long long> a(n);
  long long sum_t=0;
  for(int i =0;i< n;i++){
    cin>> a[i];
    sum_t+=a[i]*k;
  }
  
  long long sum  = a[0]*k;
  
  for(int i =1;i< n;i++){
    if(a[i]*100> sum){
      sum += a[i]*100 - sum;

    }
    sum+= a[i]*k;
  }
  cout<<(sum- sum_t)/k + ((sum-sum_t)%k==0?0:1)<<endl;
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
