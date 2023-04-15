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
  double n;
  double l;
  cin>> n>> l;
  vector<double> a;
  for( int i =0;i< n;i++){
    double t;
    cin>> t;
    a.push_back(t);
  }
  sort(a.begin(),a.end());
  double distance =0;
  for(int i =0;i<a.size();i++){
    if(i==n-1 && a[i]!= l){ distance = max(distance, 2*(l - a[n-1]));}
    if(i==0&& a[i]!=0) {distance = max(distance,a[i]*2); continue;}
    else if (i==0) continue;
    distance = max(a[i] - a[i-1], distance);
  }
    printf("%.10f", distance/2);
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
        solve();
    return 0;
}
