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
  vector<long long>b (n+2);
  for( int i=0;i< n+2;i++) cin>> b[i];
  sort(b.begin(), b.end());
  long long sum = 0;
  for(int i =0;i< n;i++){
    sum+= b[i];
  }
  if(sum==b[n]){
    for(int i =0;i< n;i++) cout<< b[i]<<" ";
    cout<<endl;
  } else{
    sum +=b[n];
    bool flag = binary_search(b.begin(),b.end()-1, -b[n+1]+ sum);
    if(flag){
      bool check = false;
      for(int i =0;i< n+1;i++){
        if(b[i]== -b[n+1]+ sum && !check) check = true;
        else cout<< b[i]<<" ";
      }
      cout<<endl;

    } else cout<<"-1"<<endl;
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
