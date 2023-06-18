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
  cin>> n>>k;
  vector<long long> a(n);
  long long sum = 0;
  for(int i =0;i< n;i++){
    cin>> a[i];
    sum+= a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> start(k+1), end(k+1);
  for(int i =1;i<=k;i++) {
    start[i] = a[2*(i-1)] + a[2*(i-1)+1];
    end[i] = a[n-i];
      start[i]+=start[i-1];
      end[i]+=end[i-1];
  }
  long long result = -1;
  for(int i =0;i<=k;i++){
    result  = max(result, sum - start[i] - end[k-i]);
  }
  cout<< result<<endl;
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
