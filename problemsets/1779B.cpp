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
  if(n%2!=0){
     if(n<5)cout<<"NO"<<endl;
     else {
       cout<<"YES"<<endl;
       int k  = (n-1)/2;
       for(int i =0;i< n;i++){
         if(i%2==0){
            cout<<k-1<<" ";
         }else {
            cout<<-k<<" ";
         }
       }
       cout<<endl;
     }
  } else {
    cout<<"YES"<<endl;
    for(int i =0;i<n ;i++){
      if(i%2==0) cout<< "1"<<" ";
      else cout<< "-1"<<" ";
    }
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
