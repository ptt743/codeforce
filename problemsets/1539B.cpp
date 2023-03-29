#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n, m;
  cin>>n>>m;
  string s;
  cin>> s;
  s="0"+s;
  int l,r;
  vector<long long> sum( n+1);
  for(int i =1;i<=n;i++) sum [i] = sum[i-1]+ (s[i]-'a'+1);
  for( int i =0;i< m ;i++){
    cin>> l>>r;
    cout<< sum[r]-sum[l-1]<<endl;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
