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
	string s;
  cin>> s;
  vector<vector<int>> count(2, vector<int>(3,0));
  for(int i =0;i< 10;i++){
    if(i%2==0){
      count[0][0]+=(s[i]=='?')?1:0;
      count[0][1]+=(s[i]=='?')?0:(s[i]-'0');
      count[0][2]++;
    }else{
      count[1][0]+=(s[i]=='?')?1:0;
      count[1][1]+=(s[i]=='?')?0:(s[i]-'0');
      count[1][2]++;
    }
    if(i==9&& count[0][1]==count[1][1]) {cout<<"10"<<endl;return;}
    for(int x =0;x<= count[0][0];x++){
      for(int y =0;y<= count[1][0];y++){
        bool check  = true;  
        if(x+ count[0][1] + (5- count[0][2])<y+ count[1][1])
          check = false;
        if(x+ count[0][1]> y+ count[1][1] + (5- count[1][2]))
          check = false;
        if(!check){
          cout<<i+1<<endl;
          return;
        }
      }
    }

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
