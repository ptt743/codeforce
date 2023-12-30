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
	int q, d;
	cin>> q >> d;
	vector<long long> a(q);
	vector<int> dp(207,0);
	dp[0]=1;
	 int maxx = d*10;
	 for(int i =0;10*i +d <=maxx;i++){
		for(int j =0; 10*i + d + j <= maxx; j++){
			dp[10*i+d+j] |= dp[j];
		}
	 }
	 while(q--){
		int t;
		cin>> t;
		if(t> maxx  || dp[t]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	 }
	
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
