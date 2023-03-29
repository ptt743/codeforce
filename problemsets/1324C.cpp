#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#define ll long long
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
  string s;
  cin>> s;
  s = "R" + s;
  int n  = s.size();
  int l = 1, r = n;
  while(l<= r){
    int mid = (l+r)/2;
    int max_index = 0;
    bool flag = true;
    for(int i =0;i< n;i++){
      if(i<= max_index && s[i]=='R'){max_index = max(max_index, i+ mid);}
       if (i> max_index) {flag = false;break;}
    }
    if(max_index<n) flag = false;
    if(flag) r = mid-1;
    else l = mid+1;
  }
  cout<< l<<endl;
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
