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
int find_right(vector<int> &b){
  int n  = b.size()-1;
  int x =1;
  while(x+1<=n && b[x+1]==b[1]) x++;
  return x;
}

void apply(vector<int> & b, int l , int r){
    int mid = (r-l+1)/2;
    for(int i =0;i<mid;i++){
      b[l+i+mid] = b[l+i];
    }
}
void solve(){
	int n ;
  cin>> n;
  vector<int> a(n+1);
  for(int i=1;i<=n;i++) cin>>a[i];
  vector<int> b = a;
  reverse(b.begin()+1, b.end());
  int ans  = 0;
  while(find_right(b)!=n){
    int x = find_right(b);
    if(2*x>n){
      apply(b,x-(n-x)+1,n);
      ans++;
    }else {
      apply(b,1,2*x);
      ans++;
    }

  }
  cout<<ans<<endl;
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
