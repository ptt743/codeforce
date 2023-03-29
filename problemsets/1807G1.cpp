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
  vector<int> a(n);
  for( int i=0;i<n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  if(a[0]!=1){
    cout<<"NO"<<endl;
    return;
  }
  bool flag = true;
  for(int i=1;i<n;i++){
    int tmp=a[i];
    for(int j =i-1; j>=0;j--){
      if(a[j]<=tmp) tmp-=a[j];
    }
    if(tmp!=0){flag = false; break;}
  }
  if(!flag) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
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
