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
  vector<int> a(n);
  for(int i =0;i<n;i++){
    cin>> a[i];
    if(a[i]==1) a[i]+=1;
  }
  for(int i =1;i<n;i++){
    if(a[i]%a[i-1]==0){
      a[i]+=1;
    }
  }
  for(int x : a){ cout<< x<<" ";}
  cout<<endl;
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
