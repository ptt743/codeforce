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
  long long n,x;
  cin>> n>> x;
  vector<long long> a(n);
  for( int i =0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  long long result=0;
  long long sum =0;
  for( int i =0;i<n;i++) sum+= a[i];
  int preday = -1;
  for( int i =n-1;i>=0;i--){
    int curday = (x >= sum)? (x- sum )/(i+1):-1;
    result += (i+1)*( curday - preday);
    preday = curday;
    sum-=a[i];
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
