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
  vector<long long> a(n);
  for(int i =0;i< n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  vector<int> b;
  for(int i =0;i< n;){
    int index = upper_bound(a.begin(), a.end(), a[i]) - a.begin();
    b.push_back(index - i);
    i = index;
  }
  sort(b.begin(),b.end());
  int m = b.size();
  vector<int> left(n), right(n);
  left[0] = b[0];
  for(int i =1;i<m ;i++) left[i] = left[i-1] + b[i];
  right[m-1] = b[m-1];
  for(int i =m-2;i>=0;i--) right[i] = right[i+1] + b[i];
  int ans  = INT_MAX;
  for(int i =0;i<m;i++){
    int l=0, r=0;
    int index1 = lower_bound(b.begin(),b.end(), b[i]) - b.begin()-1;
    int index2 = upper_bound(b.begin(),b.end(),b[i]) - b.begin();
    if(index1>=0) l = left[index1];
    if(index2<n) r = right[index2];
    ans = min(ans, l + r - b[i]*(m- index2));
  }
  cout<< ans<<endl;
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
