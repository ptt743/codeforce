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
int sum_char(vector<vector<char>>& a, int i){
  return (a[0][i]-'0')+ (a[1][i]-'0');
}
void solve(){
	int n ;
  cin>> n;
  vector<vector<char>> a(2,vector<char>(n));
  for(int i =0;i<2;i++){
    for(int j =0;j<n;j++){
      cin>>a[i][j];
    }
  }
  int result=0;
  for(int i =0;i<n;){
    if(sum_char(a,i)==1){ result+= 2; i++;}
    else if(sum_char(a,i)==2){
      while(i<n){
        if(sum_char(a,i)<2) break;
        i++;
      }
      if(i<n)result+=2;
      i++;
    }
    else {
      int temp = i+1;
      while(temp<n){
        if(sum_char(a,temp)>0) break;
        temp++;
      }
      if(temp<n && sum_char(a,temp)==1) {result+= temp -i +2; temp++;}
      else if(temp==n) result+=temp-i;
      else if(temp<n && ((temp-i)>= 2) ){ result+=temp-i+1; temp++;}
      else {result+=2;temp++;}
      i=temp;
    }
  }
  cout<<result<<endl;
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
