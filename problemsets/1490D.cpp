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
  vector<int> result(n);
  for(int i =0;i< n;i++) cin>> a[i];
  function<void(int, int, int)> dfs= [&](int left, int right,int d)-> void {
    if(right< left) return ;
    int mx = 0;

    int index = 0;
    for(int i =left; i<= right;i++){
      if(a[i]>mx){
        mx = a[i];
        index = i;
      }
    }
    result[index] = d;
    dfs(left,index-1,d+1);
    dfs(index+1, right, d+1);
  };
  dfs(0,n-1, 0);
  for(int i =0;i<n;i++)cout<< result[i]<<" ";
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
