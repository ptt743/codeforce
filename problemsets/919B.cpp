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
bool check(long long input){
  string sentence = to_string(input);
  long long result =0;
  for( int i=0;i< sentence.size(); i++){
    result+= sentence[i]-'0';
  }
  return result==10;
}
void solve(){
  int k;
  cin>> k;
  int count=0;
  long long number=0;
  while(count<k){
    if(check(number)) count++;
    number++;
  }
  cout<< number-1<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
