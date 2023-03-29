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
  vector<long long > a(n);
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for(int i =0;i< n;i++){
    cin>> a[i];
    if(i>0){
      pq.push(a[i]);
    }
  }
  long long result = a[0];
  while(!pq.empty()){
    long long top = pq.top();
    pq.pop();
    if(top< result ) continue;
    result+= (top - result)/2 + (((top- result)%2)?1:0);
  }
  cout<< result<<endl;

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
