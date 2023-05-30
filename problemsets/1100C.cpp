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
const double PI=acos(-1.0);
void solve(){
  double n, r;
  cin>> n>> r;
  // angle = 180/n; R = (r+R)*sin(angle);
  // R = r*sin(abgle)/(1-sin(angle))
  double angle = PI/n;
  printf("%.7f",r*(sin(angle)/(1.0000000- sin(angle))));
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    solve();
    return 0;
}
