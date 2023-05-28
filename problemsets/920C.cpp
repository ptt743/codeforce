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
  vector<int> a(n+1);
  for(int i =1;i<=n;i++) cin>>a[i];
  string s;
  cin>> s;
  vector<int> sum(n+1);
  for(int i=2;i<=n;i++) sum[i] = (s[i-2]-'0') + sum[i-1];
  for(int i =2;i<=n;i++){
    if(a[i]<i && (sum[i] - sum[a[i]])!=i-a[i]){
      cout<<"NO"<<endl;
      return;
    }
  }
  cout<<"YES"<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
