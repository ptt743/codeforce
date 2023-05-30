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
	long long n,m;
  cin>>n>>m;
  vector<long long> k(n+1),c(m+1);
  vector<bool> visited(m+1);
  for( int i =1;i<= n;i++) cin>> k[i];
  for(int i =1;i<=m;i++) cin>>c[i];
  sort(k.begin(), k.end());
  long long result=0;
  for(int i =n;i>=1;i--){
    int l = 1, r = k[i];
    while(l<=r){
      int mid = (l+r)/2;
      if(visited[mid]==false)r = mid-1;
      else l = mid+1;
    }
    if(l>= k[i]){ result+=c[k[i]];}
    else {  result+=c[l]; visited[l] = true;}
  }
  cout<<result<<endl;
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
