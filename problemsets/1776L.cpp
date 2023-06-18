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
  string s;
  cin>> s;
  int q;
  bool flag = false;
  cin>>q;
  while(q--){
    long long a, b;
    cin>> a>> b;
    int left = 0, right = s.size();
    while(left<=right){
      int mid = (left + right)/2;
      long long temp = a*mid/b;
      if(temp+ mid==n) { cout<<"YES"<<endl;flag = true; break;}
      else if(temp + mid < n) left = mid+1;
      else right = mid-1;
    }
    if(!flag)cout<<"NO"<<endl;
  }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
        solve();
    return 0;
}
