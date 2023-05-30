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
 for(int i=1;i<= n;i++) cin>> a[i];
 for(int i =2;i<= n;i++) a[i] +=a[i-1];
 int left = 1, right = n;
 while(left<=right){
   int mid = (left+right)/2;
   cout<<"? "<<mid<<" ";
  long long t;
  for(int i =1;i<=mid;i++) cout<<i<<" ";
  cout<<endl;
  cout.flush();
  cin>>t;
  if(t> a[mid]) right = mid-1;
  else left = mid+1;
 }
 cout<<"! "<<left<<endl;
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
