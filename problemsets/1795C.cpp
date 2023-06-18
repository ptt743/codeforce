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
	int n ;
  cin>> n;
  vector<long long> a(n+1);
  vector<long long> b(n+1);
  vector<long long> sum(n+1);
  vector<int> cnt(n+1);
  vector<long long > add(n+1);
  for(int i =1;i<= n;i++) cin>> a[i];
  for(int i =1;i<=n;i++){
      cin>> b[i];
      sum[i] = sum[i-1]+ b[i];
  }
  for(int i =1;i<=n;i++){
    int index = upper_bound(sum.begin(), sum.end(), sum[i-1] + a[i]) - sum.begin();
    cnt[i]+=1;
    if(index<=n){
    cnt[index]-=1;
    add[index] += sum[i-1] + a[i] - sum[index-1];
    }
  }
  for(int i =1;i<=n;i++){
    cnt[i]+=cnt[i-1];
    cout<< cnt[i] * b[i] + add[i]<<" ";
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
