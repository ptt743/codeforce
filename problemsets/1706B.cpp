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
 vector<vector<int>> dp(2, vector<int>(n+1,0));
 for(int i=0;i< n;i++){
   int c;
   cin>> c;
   int t  = i&1;
   dp[t][c] = max(dp[t][c], dp[1-t][c]+1);
 }
 for(int i =1;i<=n;i++){
   cout<<max(dp[1][i], dp[0][i])<<" ";
 }
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
