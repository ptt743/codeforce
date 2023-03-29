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
  string s;
  cin>>n;
  vector<int> p(n);
  for( int i =0;i<n;i++) cin>> p[i];
  cin>> s;
  int count=0;
  for(int i =0;i<s.size();i++)if(s[i]=='0') count++;
  vector<pair<int, int>> dislike, like;
  for(int i =0;i<n;i++){
    if(s[i]=='0'){
      dislike.push_back(make_pair(p[i],i));
    } else {
      like.push_back(make_pair(p[i],i));
    }
  }
  int left = 1, right = count+1;
  sort(dislike.begin(), dislike.end());
  sort(like.begin(), like.end());
  for(int i=0;i< dislike.size();i++) p[dislike[i].second] = left++;
  for(int i=0;i< like.size(); i++) p[like[i].second] = right++;
  for(int i =0;i< n;i++) cout<<p[i]<<" ";
  cout<<endl;

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
