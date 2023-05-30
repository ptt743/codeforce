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
  long long x,y;
  cin>> x>>y;
  int n = 2*(x-y);
  cout<< n<<endl;
  vector<long long> a(n);
  int ptr=0;
  for(ll c = y;c< x;c++)  a[ptr++] = c;
  for(ll c = x;c>y;c--) a[ptr++] = c;
  for(ll item : a) cout<< item<<" ";
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
