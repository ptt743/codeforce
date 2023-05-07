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
	int n;
  cin>> n;
  vector<int> a(n),left(n), right(n);
  unordered_map<int,int> mp;
  for(int i =0;i<n;i++){
    cin>> a[i];
    mp[a[i]]=i+1;
  }
  left =a;
  right = a;
  for(int i =1;i< n;i++) left[i] = min(left[i], left[i-1]);
  for(int i =n-2;i>=0;i--) right[i] = min(right[i], right[i+1]);
  for(int i =0;i< n;i++){
    if(a[i]!=left[i] && a[i]!= right[i]){
      cout<<"Yes"<<endl;
      cout<<mp[left[i]]<<" "<<i+1<<" "<<mp[right[i]]<<endl;
      return ;
    }
  }
  cout<<"No"<<endl;
  return ;
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
