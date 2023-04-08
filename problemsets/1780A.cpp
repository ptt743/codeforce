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
  int odd = 0;
  int eve = 0;
  vector<int> a(n+1);
  for(int i =1;i<= n;i++){
    cin>> a[i];
    if(a[i]%2==0)eve++;
    else odd++;
  }
  int count=0;
  if(odd>=3){
    cout<< "YES"<<endl;
    for(int i=1;i<= n;i++){ 
      if(a[i]%2!=0){
        count++;
        cout<<i<<" ";
      }
      if(count==3)break;
    }
    cout<<endl;
  }
  else if (eve>=2 && odd>=1){
    cout<<"YES"<<endl;
    int count2 = 0;
    for( int i=1;i<=n;i++){
      if(a[i]%2==0 && count2<2){ cout<<i<<" "; count2++;}
      if(a[i]%2!=0 && count<1){ cout<<i<<" "; count++;}
    }
    cout<<endl;
  }else {
    cout<<"NO"<<endl;
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
