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
  string s;
  cin>> s;
  int zeros = count(s.begin(), s.end(), '0');
  if(zeros==0){
    cout<<"0"<<endl;
    return;
  }
  int first = s.find('0');
  int last = s.rfind('0');
  if(zeros == (last-first +1)){
    cout<<"1"<<endl;
    return;
  }
  cout<<"2"<<endl;
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
