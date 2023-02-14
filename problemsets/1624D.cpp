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
 int n, k;
 string s;
 cin>> n>>k;
 cin>> s;
 vector<int> count(26);
 for( int i =0;i< n; i++){
  count[s[i]-'a']++;
 }
 //sort(count.begin(), count.end());
 int countpair=0, countodd=0; 
 for( int i=0;i< 26;i++){
   countpair += count[i]/2;
   countodd  += count[i]%2;
  }
  int res = 2* (countpair/k);
  int res2 = countodd + 2* (countpair%k);
  if(res2>= k) res++;

 cout<<res<<endl;
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
