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
  int n,k;
  cin>>n>>k;
  string s;
  cin>> s;
  vector<int> lower(26), upper(26);
  for(int i =0;i< n;i++){
    if(s[i]> 'Z'){
      lower[s[i]-'a']++;
    } else {
      upper[s[i] -'A']++;
    }
  }
  int result = 0;
  for(int i =0;i< 26; i++){
    int min_c = min(lower[i], upper[i]);
    int max_c = max(lower[i], upper[i]);
    result +=min_c;
    if(k>0){
      int temp = (max_c - min_c)/2;
      temp = (temp<=k?temp:k);
      result += temp;
      k-=temp;
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
