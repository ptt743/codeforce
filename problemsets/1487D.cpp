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
	long long n = 1e9;
  vector<pair<long long, long long>> a;
  long long i =1;
  a.push_back(make_pair(0,0));
  for( ;i<= sqrt(2*n-1);i++){
    long long c = (i*i+1)/2;
    if(c<=n && c> i &&  (c*c == (c-1)*(c-1) + i*i)){
    a.push_back(make_pair(c,a.back().second+1));
    }
  }
int t;
    cin >> t;
    while(t--){
      long long m ;
      cin>> m;
      long long l = 1, r = a.size()-1;
      while(l<=r){
        long long mid = (l+r)/2;
        if(a[mid].first>m) r = mid-1;
        else l=mid+1;
      }
      cout<<a[l-1].second<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
            solve();
    return 0;
}
