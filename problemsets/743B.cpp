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
long long rc(long long n){
  if(n==1) return 1;
  return 2*rc(n-1)+1;
}
void solve(){
	int  n;
  long long k;
  cin>> n>>k;
  long long len = rc(n);
  cout<<"len"<< len<<endl;
  long long left=0, right=len-1;
  int number = n;
  k--;
  while(left<= right){
    long long mid = (left+ right)/2;
    if(mid==k) break ;
    if(k< mid) right = mid-1;
    if(k> mid) left = mid+1;
    number--;
  }
  cout<< number<<endl;


  
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
