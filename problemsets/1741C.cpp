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
	int n, count, num;
  cin>> n;
  vector<int> a(n+1), b(n+1);
  int sum=0, ans = n;
  for(int i=1;i<=n;i++){
    cin>> a[i];
    b[i] = b[i-1]+ a[i];
  }
  for(int i = 0;i< n;i++){
    int cnt =i, num = i;
    for(int j =i+1;j<=n;j++){
      if(b[j] - b[cnt]== b[i]){
        num = max( num, j - cnt);
        cnt  = j;
      }
      if(cnt== n) ans = min(ans, num);
    }
  }
  cout<<ans<<endl;
    
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
