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
  int n, k;
  cin>> n>>k;
  vector<int>a(n);
  vector<bool> visited(n);
  long long result = 0;
  for( int i=0;i<n;i++) {
    cin>> a[i];
    result+= a[i]/k;
    a[i] = a[i]%k;
  }
  sort(a.begin(), a.end());
  for( int i =0,j=n-1;i<j;j--,i++){
    while(a[i]+a[j]<k && i< j)i++;
    if(i==j)break;
    result++;
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
