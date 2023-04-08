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
  cin>>n;
  vector<int> a(n+1);
  for(int i =1;i<= n;i++){
    cin>> a[i];
  }
  if(a[n]== a[1]){
    cout<<"NO"<<endl;
    return;
  } else {
    cout<<"YES"<<endl;
    swap(a[0], a[n]);
    for( int i =0;i<n;i++) cout<< a[i]<<" ";
    cout<<endl;
  }


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
