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
  vector<int> pos(n+1);
  for(int i =0;i< n;i++){
    int t;
    cin>> t;
    pos[t] = i;
  }
  int l = (n+1)/2, r = (n+2)/2;
  while (l > 0 && (l == r || (pos[l] < pos[l + 1] && pos[r - 1] < pos[r]))) {
      --l;
      ++r;
    }
    cout << (n - r + l + 1) / 2 << '\n';
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
