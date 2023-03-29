#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>

#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	int n; 
  cin>> n;
  int sum =0;
  int counto = 0, countt=0;
  for( int i =0;i< n;i++){
    int temp;
    cin>> temp;
    if(temp==1) counto++;
    else countt++;
    sum+=temp;
  }

  if(sum%2!=0){ cout<<"NO"<<endl; return;}
  if(countt%2!=0 && counto==0) cout<<"NO"<<endl;
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
