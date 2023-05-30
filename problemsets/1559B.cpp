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
  string s; 
  cin>> s;
  vector<int>  right(n);
  right[n-1]=1;
  
  for(int i =n-2;i>=0;i--){
    if(s[i]==s[i+1])right[i] = right[i+1]+1;
    else right[i]=1;
  }
  for(int i =0;i< n;i++){
    if(s[i]=='?'){
      int count  = right[i];
      if(i-1<0 || i+ count>=n){
        if(i-1<0){
          int index = i+ count-1;
          while(index>=0){
            s[index] = (s[index+1]=='R')?'B':'R';
            index--;
          }
        }else {
          int index = i;
          while(index<n){
            s[index] = (s[index-1]=='R')?'B':'R';
            index++;
          }
        }
      }else{
        int l = i;
        int r = i+ count;
        while(l<r ){
          s[l] = (s[l-1]=='R')?'B':'R';  
          l++;
        }
      }
      i+=count-1;
    }
  }
  cout<<s<<endl;
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
