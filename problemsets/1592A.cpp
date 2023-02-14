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
  int n;
  long long h, res=0;
  cin>> n>>h;
  vector<long long> a(n);
  for(int i =0;i<n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  int old_index=-1;
  while( h>0){
    int index = upper_bound(a.begin(), a.end(),h)- a.begin();
    if(index>n-1) index--;
    if( index== old_index){
      if(index!= n-1 ) index++;
      else index--;
    }
    h-=a[index];
    old_index = index;
    res++;
  }
  cout<<res<<endl;
}
 void solve2(){
  int n; 
  long long h;
  cin>> n>>h;
  vector<long long> a(n);
  for(int i =0;i<n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  long long left=1, right = h;
  while( left<= right){
    long long mid = (left+ right)/2;
    long long cal = a[n-2]* (mid/2) + a[n-1]*(mid/2 + (mid%2));
    if( cal<h) left= mid+1;
    else right = mid-1;
  }
  cout<<left<<endl;
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve2();
    }
    return 0;
}
