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
 int n ;
 cin>> n;
 vector<long long> a(n);
 vector<long long> result;
 for( int i =0;i<n;i++) cin>> a[i];
  sort(a.begin(), a.end());
  int number_down = (n/2 + n%2)-1;
  int number_result = number_down;
  if(n%2==0){
    number_down++;
  }
  int left=0, right = number_down;
  bool flag = true;
  
  while( left< number_down || right < n){
    if(flag){
      result.push_back(a[right]);
      right++;
    }else{
      result.push_back(a[left]);
      left++;
    }
    flag = !flag;
  }
  cout<< number_result<<endl;
  for( int i =0;i< result.size();i++) cout<< result[i]<<" ";
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
