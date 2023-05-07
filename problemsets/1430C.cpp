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
  cout<<"2"<<endl;
  if(n>2){
  cout<<n<<" "<<(n-2)<<endl;
  cout<<(n-1)<<" "<<(n-1)<<endl;
  n = n-1;
  while(n!=2){
    cout<<n<<" "<<n-2<<endl;
    n = n-1;
  }
  } else {
    cout<< "1 2"<<endl;
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
