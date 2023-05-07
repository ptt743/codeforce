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
  string s;
  cin>> s;
  vector<int> count(n), count2(n);
  vector<bool> visited(26, false);
  count[0]=1;
  visited[s[0]-'a'] = true;
  for(int i =1;i< n;i++){
    if(visited[s[i]-'a']==false){
      count[i]= 1+ count[i-1]; 
      visited[s[i]-'a'] = true;
    } else count[i] = count[i-1];
  }
  visited = vector<bool>(26, false);
  count2[n-1]=1;
  visited[s[n-1]-'a'] = true;
  for( int i=n-2;i>=0;i--){
    if(visited[s[i]-'a']== false){
      count2[i]=1+ count2[i+1];
      visited[s[i]-'a'] = true;
    } else count2[i] = count2[i+1];
  }
  int max_value=INT_MIN;
  for(int i =0;i<n-1;i++){
    max_value = max(max_value,count[i] + count2[i+1]);
  }
  cout<<max_value<<endl;
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
